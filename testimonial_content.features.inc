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
    "name" : "Testimonial",
    "plural" : "Testimonials",
    "data" : {
      "path" : "admin\\/manage\\/testimonials",
      "auto_title" : 1,
      "icon" : "comment"
    },
    "rdf_mapping" : [],
    "public" : false
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
