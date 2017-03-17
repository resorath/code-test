<?php
/**
 * @file
 * ucgy_gbl_accordion.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ucgy_gbl_accordion_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'field_collection_item-field_fc_accordion_steps-field_accord_numbered_step'.
  $field_instances['field_collection_item-field_fc_accordion_steps-field_accord_numbered_step'] = array(
    'bundle' => 'field_fc_accordion_steps',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => 'Whether the step should have a number associated with it.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_accord_numbered_step',
    'label' => 'Numbered step?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_fc_accordion_steps-field_accord_step_description'.
  $field_instances['field_collection_item-field_fc_accordion_steps-field_accord_step_description'] = array(
    'bundle' => 'field_fc_accordion_steps',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_accord_step_description',
    'label' => 'Step description',
    'required' => 1,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 500,
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_fc_accordion_steps-field_accord_step_heading'.
  $field_instances['field_collection_item-field_fc_accordion_steps-field_accord_step_heading'] = array(
    'bundle' => 'field_fc_accordion_steps',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Highlighting the first step for the accordion',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_accord_step_heading',
    'label' => 'Step heading',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 1,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_gbl_accord_fc_content-field_accordion_button_alignment'.
  $field_instances['field_collection_item-field_gbl_accord_fc_content-field_accordion_button_alignment'] = array(
    'bundle' => 'field_gbl_accord_fc_content',
    'default_value' => array(
      0 => array(
        'value' => 'Centre',
      ),
    ),
    'deleted' => 0,
    'description' => 'Where the button appears within the accordion.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_accordion_button_alignment',
    'label' => 'Button alignment',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_gbl_accord_fc_content-field_accordion_description'.
  $field_instances['field_collection_item-field_gbl_accord_fc_content-field_accordion_description'] = array(
    'bundle' => 'field_gbl_accord_fc_content',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_accordion_description',
    'label' => 'Accordion description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 500,
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_gbl_accord_fc_content-field_accordion_heading'.
  $field_instances['field_collection_item-field_gbl_accord_fc_content-field_accordion_heading'] = array(
    'bundle' => 'field_gbl_accord_fc_content',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The heading that will appear in the accordion line. This will be what is displayed when the accordion is closed.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_accordion_heading',
    'label' => 'Accordion heading',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 1,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_gbl_accord_fc_content-field_accordion_link'.
  $field_instances['field_collection_item-field_gbl_accord_fc_content-field_accordion_link'] = array(
    'bundle' => 'field_gbl_accord_fc_content',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_accordion_link',
    'label' => '',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'user',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 30,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'advanced_link',
      'settings' => array(),
      'type' => 'advanced_link',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_gbl_accord_fc_content-field_fc_accordion_steps'.
  $field_instances['field_collection_item-field_gbl_accord_fc_content-field_fc_accordion_steps'] = array(
    'bundle' => 'field_gbl_accord_fc_content',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_fc_accordion_steps',
    'label' => 'Steps',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'fieldable_panels_pane-ucgy_gbl_accordion-field_gbl_accord_description'.
  $field_instances['fieldable_panels_pane-ucgy_gbl_accordion-field_gbl_accord_description'] = array(
    'bundle' => 'ucgy_gbl_accordion',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_gbl_accord_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => -3,
    ),
  );

  // Exported field_instance:
  // 'fieldable_panels_pane-ucgy_gbl_accordion-field_gbl_accord_disable_heading'.
  $field_instances['fieldable_panels_pane-ucgy_gbl_accordion-field_gbl_accord_disable_heading'] = array(
    'bundle' => 'ucgy_gbl_accordion',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Please select the checkbox if you do not want the heading displayed on the page.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_gbl_accord_disable_heading',
    'label' => 'Disable heading',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => -4,
    ),
  );

  // Exported field_instance:
  // 'fieldable_panels_pane-ucgy_gbl_accordion-field_gbl_accord_fc_content'.
  $field_instances['fieldable_panels_pane-ucgy_gbl_accordion-field_gbl_accord_fc_content'] = array(
    'bundle' => 'ucgy_gbl_accordion',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_gbl_accord_fc_content',
    'label' => 'Accordion content',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => -2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Accordion content');
  t('Accordion description');
  t('Accordion heading');
  t('Button alignment');
  t('Description');
  t('Disable heading');
  t('Highlighting the first step for the accordion');
  t('Numbered step?');
  t('Please select the checkbox if you do not want the heading displayed on the page.');
  t('Step description');
  t('Step heading');
  t('Steps');
  t('The heading that will appear in the accordion line. This will be what is displayed when the accordion is closed.');
  t('Where the button appears within the accordion.');
  t('Whether the step should have a number associated with it.');

  return $field_instances;
}
