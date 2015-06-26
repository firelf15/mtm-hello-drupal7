<?php
/**
 * @file
 * all_the_things.features.inc
 */

/**
 * Implements hook_views_api().
 */
function all_the_things_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function all_the_things_image_default_styles() {
  $styles = array();

  // Exported image style: slideshow.
  $styles['slideshow'] = array(
    'label' => 'Slideshow',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 960,
          'height' => 540,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function all_the_things_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
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
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'slates' => array(
      'name' => t('Slates'),
      'base' => 'node_content',
      'description' => t('aka sprints'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'slideshow' => array(
      'name' => t('Slideshow'),
      'base' => 'node_content',
      'description' => t('everybody\'s doing it'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
