(function ($) {
    function showAccordion(e) {
        $(e.target)
        .prev('.panel-heading')
        .addClass('active');
    }

    function hideAccordion(e) {
        $(e.target)
        .prev('.panel-heading')
        .removeClass('active');
    }

    $(window).load( function() {
        $(this).on('shown.bs.collapse', showAccordion);
        $(this).on('hidden.bs.collapse', hideAccordion);
        $('.brick.accordion ol.checklist > li').matchHeight();
    });
})(jQuery);