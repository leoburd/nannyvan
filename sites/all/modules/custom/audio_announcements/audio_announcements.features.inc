<?php
/**
 * @file
 * audio_announcements.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function audio_announcements_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function audio_announcements_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function audio_announcements_node_info() {
  $items = array(
    'audio_announcements' => array(
      'name' => t('Audio Announcements'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
