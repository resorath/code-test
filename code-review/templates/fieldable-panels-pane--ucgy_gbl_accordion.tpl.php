<?php if ($logged_in && $is_admin) { ?><!-- Include file: <?php echo str_replace('-', '=', __FILE__); ?> --><?php } ?>

<?php

    // Let's declare some variables to clean up Drupal's output a bit

    // Title (required)
    $main_heading = $content['title']['#value'];

    // Disable or show heading.
    $show_heading = $content['field_gbl_accord_disable_heading']['#items'][0]['value'];

    // Description
    if (isset($content['field_gbl_accord_description'])) {

        $main_description = $content['field_gbl_accord_description']['#items'][0]['value'];
    }

?>

<div class="<?php echo $classes; ?>">
  <div class="row">
    <div class="container">
      <div class="row header">

        <div class="col-sm-12">
          <?php if ($show_heading == 0){ ?>
            <h3><?php print $main_heading; ?></h3>
          <?php }; ?>

          <?php if (isset ($main_description)){ ?>
            <p><?php print $main_description; ?></p>
          <?php }; ?>
        </div>

      </div>
      <!--  / end row header  -->

      <div class="row">
        <div class="col-sm-12">
          <div class="panel-group" id="accordion" role="tablist" aria-multiselectable="true">


              <?php // First loop through the first field collection

                // Start a counter
                $counter = 1;

                // Loop through the first field collection.
                foreach ($content['field_gbl_accord_fc_content']['#items'] as $item){

                   // Load the field collection item by entity id.
                   $loaded_entity = entity_load('field_collection_item', array($item['value']));

                   // Use array shift to get at the field collection variables without using the entity ID
                   $loaded_entity = array_shift($loaded_entity);

                   // If the counter is at 1, initialize variables to use for pre javascript state classes (eg. active or collapsed)
                    if ($counter == 1){
                        $active = 'active';
                        $open = 'in';
                        $collapsed = '';
                        $chevron_position = 'up';

                    } else {
                        $active = '';
                        $open = '';
                        $collapsed = 'collapsed';
                        $chevron_position = 'down';
                    }

                    // Declare some variables

                    // Accordion Heading (required)
                    $accordion_heading = $loaded_entity->field_accordion_heading[LANGUAGE_NONE][0]['value'];

                    // Accordion Description
                    if (isset($loaded_entity->field_accordion_description)){
                        $accordion_description = $loaded_entity->field_accordion_description[LANGUAGE_NONE][0]['value'];
                    }

                    // Accordion button alignment
                    if (isset($loaded_entity->field_accordion_button_alignment)){
                        // Define button alignment with lower case value
                        $button_alignment = strtolower($loaded_entity->field_accordion_button_alignment[LANGUAGE_NONE][0]['value']);

                        // Drop down display value is centre but css uses center
                        if ($button_alignment == 'centre'){
                            $button_alignment = 'center';
                        }
                    } else {
                        $button_alignment = 'center';
                    }


                    // Classes for the checklist items depending number of items in the accordion steps field collection.
                    $fc_items_count = count($loaded_entity->field_fc_accordion_steps[LANGUAGE_NONE]);

                    if ($fc_items_count <= 2){
                        $checklist_class = 'checklist min-items';
                    } elseif ($fc_items_count == 3) {
                        $checklist_class = 'checklist three-items';
                    } elseif ($fc_items_count == 4) {
                        $checklist_class = 'checklist four-items';
                    } else {
                        $checklist_class = 'checklist max-items';
                    }

              ?>

            <div class="panel panel-default">
              <div class="panel-heading <?php print $active; ?>" role="tab" id="heading<?php print $counter; ?>">
                <h4 class="panel-title">
                  <a class="<?php print $collapsed; ?>" role="button" data-toggle="collapse" href="#collapse<?php print $counter; ?>" aria-expanded="true" aria-controls="collapse<?php print $counter; ?>">
                    <?php print $accordion_heading; ?><i class="glyphicon glyphicon-chevron-<?php print $chevron_position; ?>"></i>
                  </a>
                </h4>
              </div>
              <div id="collapse<?php print $counter; ?>" class="panel-collapse collapse <?php print $open; ?>" role="tabpanel" aria-labelledby="heading<?php print $counter; ?>">
                <div class="panel-body">

                  <?php if (isset($accordion_description)) { ?>
                  <div class="checklist-header">
                    <p><?php print $accordion_description; ?></p>
                  </div>
                  <?php } // end description?>

                    <ol class="<?php print $checklist_class; ?>">

                    <?php // The second loop to get at the nested field collection

                        // We need another loop inside the first loop because we have a field collection in the field collection
                        foreach ($loaded_entity->field_fc_accordion_steps[LANGUAGE_NONE] as $item2) {
                            
                            // Load the field collection item by entity id.
                            $loaded_entity2 = entity_load('field_collection_item', array($item2['value']));

                            // Use array shift to load the field collection variables without using the entity id
                            $loaded_entity2 = array_shift($loaded_entity2);

                            // Initialize some variables

                            // Step heading (required)
                            $step_heading = $loaded_entity2->field_accord_step_heading[LANGUAGE_NONE][0]['value'];

                            // Step description (required)
                            $step_description = $loaded_entity2->field_accord_step_description[LANGUAGE_NONE][0]['value'];

                            // Show number?
                            if ($loaded_entity2->field_accord_numbered_step[LANGUAGE_NONE][0]['value'] == 1) {
                                $show_number = '';
                            } else {
                                $show_number = 'no-counter';
                            }

                            // Button / Link
                            if (isset($loaded_entity->field_accordion_link)){
                                $button_title = $loaded_entity->field_accordion_link[LANGUAGE_NONE][0]['title'];
                                $url = $loaded_entity->field_accordion_link[LANGUAGE_NONE][0]['url'];

                                if (isset($loaded_entity->field_accordion_link[LANGUAGE_NONE][0]['attributes']['target'])) {
                                    $target = $loaded_entity->field_accordion_link[LANGUAGE_NONE][0]['attributes']['target'];
                                } else {
                                    $target = '_self';
                                }
                            }

                    ?>

                    <li class="<?php print $show_number; ?>"><p class="title"><?php print $step_heading; ?></p>
                      <?php print $step_description; ?>
                    </li>

                    <?php } ; // End the second loop. ?>
                  </ol>
                    <?php if (isset($button_title)) { ?>
                      <div class="btn-wrapper <?php print $button_alignment; ?>">
                        <div class="button"><a class="btn btn-lg btn-fat red-back" target="<?php print $target; ?>" href="<?php print $url; ?>" role="button"><?php print $button_title; ?></a></div>
                      </div>
                    <?php } ; ?>
                </div>
              </div>
            </div>

                <?php $counter++; }; // Add to the counter and close the first loop. ?>

          </div>
        </div>

      </div>
    </div>
  </div>
</div>
