<?php
/**
 * @file
 * mystery_inc.features.inc
 */

/**
 * Implements hook_views_api().
 */
function mystery_inc_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function mystery_inc_node_info() {
  $items = array(
    'case_history' => array(
      'name' => t('Case History'),
      'base' => 'node_content',
      'description' => t('Show Case History Notes to potential clients'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'clients' => array(
      'name' => t('Clients'),
      'base' => 'node_content',
      'description' => t('Mystery Inc. Clients'),
      'has_title' => '1',
      'title_label' => t('Contact Name'),
      'help' => t('Name of person making initial contact'),
    ),
    'slates' => array(
      'name' => t('Slates'),
      'base' => 'node_content',
      'description' => t('aka sprints'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
