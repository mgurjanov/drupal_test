<?php

/**
 * @file
 * drupal_test2.features.inc
 */

/**
 * Implements hook_views_api().
 */
function drupal_test2_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function drupal_test2_node_info() {
  $items = array(
    'job' => array(
      'name' => t('job'),
      'base' => 'node_content',
      'description' => t('Job content type'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
