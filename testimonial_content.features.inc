<?php
/**
 * @file
 * testimonial_content.features.inc
 */

/**
 * Implements hook_default_asset_type().
 */
function testimonial_content_default_asset_type() {
  $items = array();
  $items['testimonial'] = entity_import('asset_type', '{
    "type" : "testimonial",
    "title" : "Testimonial",
    "plural" : "Testimonials",
    "data" : {
      "icon" : "comment",
      "path" : "admin\\/manage\\/testimonials",
      "title_label" : "Name",
      "render_title" : 1,
      "widget" : { "assetWidgetDisplay" : { "status" : 1 } },
      "viewable" : 0,
      "pathauto" : 0,
      "auto_title" : 0,
      "auto_title_pattern" : "",
      "allow_status" : 0,
      "usage_info" : 0,
      "instance_info" : 0,
      "purge" : 0,
      "no_multiple" : 0,
      "require_instance" : 0
    },
    "rdf_mapping" : [],
    "public" : true
  }');
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function testimonial_content_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}
