<?php
/**
 * @file
 * all_the_things.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function all_the_things_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_barney:node/5
  $menu_links['main-menu_barney:node/5'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/5',
    'router_path' => 'node/%',
    'link_title' => 'Barney',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'dropdown-menu',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => 'dropdown',
        'style' => '',
      ),
      'identifier' => 'main-menu_barney:node/5',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_bedrock:node/4',
  );
  // Exported menu link: main-menu_bedrock:node/4
  $menu_links['main-menu_bedrock:node/4'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/4',
    'router_path' => 'node/%',
    'link_title' => 'Bedrock',
    'options' => array(
      'identifier' => 'main-menu_bedrock:node/4',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: main-menu_fred:node/5031
  $menu_links['main-menu_fred:node/5031'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/5031',
    'router_path' => 'node/%',
    'link_title' => 'Fred',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_fred:node/5031',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_bedrock:node/4',
  );
  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_mystery-inc:node/32
  $menu_links['main-menu_mystery-inc:node/32'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/32',
    'router_path' => 'node/%',
    'link_title' => 'Mystery Inc',
    'options' => array(
      'identifier' => 'main-menu_mystery-inc:node/32',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: main-menu_shaggy:node/3
  $menu_links['main-menu_shaggy:node/3'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/3',
    'router_path' => 'node/%',
    'link_title' => 'Shaggy',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'dropdown-menu',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => 'dropdown',
        'style' => '',
      ),
      'identifier' => 'main-menu_shaggy:node/3',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_mystery-inc:node/32',
  );
  // Exported menu link: menu-new-primary-navigation_bedrock:node/4
  $menu_links['menu-new-primary-navigation_bedrock:node/4'] = array(
    'menu_name' => 'menu-new-primary-navigation',
    'link_path' => 'node/4',
    'router_path' => 'node/%',
    'link_title' => 'Bedrock',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-new-primary-navigation_bedrock:node/4',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-new-primary-navigation_home:<front>
  $menu_links['menu-new-primary-navigation_home:<front>'] = array(
    'menu_name' => 'menu-new-primary-navigation',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-new-primary-navigation_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-new-primary-navigation_mystery-inc:node/32
  $menu_links['menu-new-primary-navigation_mystery-inc:node/32'] = array(
    'menu_name' => 'menu-new-primary-navigation',
    'link_path' => 'node/32',
    'router_path' => 'node/%',
    'link_title' => 'Mystery Inc',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-new-primary-navigation_mystery-inc:node/32',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Barney');
  t('Bedrock');
  t('Fred');
  t('Home');
  t('Mystery Inc');
  t('Shaggy');


  return $menu_links;
}
