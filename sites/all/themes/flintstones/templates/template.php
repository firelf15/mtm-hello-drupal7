<?php
function flintstones_preprocess_page(&$variables){
  $variables['custom_menu'] = menu_navigation_links('menu-custom-menu');
}

function flintstones_links__menu_custom_menu(&$variables){
 //custom theme function here
}