<?php
/**
 * @file
 * all_the_things.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function all_the_things_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-new-primary-navigation.
  $menus['menu-new-primary-navigation'] = array(
    'menu_name' => 'menu-new-primary-navigation',
    'title' => 'New Primary Navigation',
    'description' => 'Monika was here.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Main menu');
  t('Monika was here.');
  t('New Primary Navigation');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');


  return $menus;
}
