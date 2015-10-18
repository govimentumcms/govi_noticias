<?php
/**
 * @file
 * govi_noticias.features.inc
 */

/**
 * Implements hook_views_api().
 */
function govi_noticias_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function govi_noticias_image_default_styles() {
  $styles = array();

  // Exported image style: imagen_principal_noticia.
  $styles['imagen_principal_noticia'] = array(
    'label' => 'Imagen principal noticia',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 300,
          'height' => 250,
        ),
        'weight' => 1,
      ),
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 75,
          'height' => 55,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function govi_noticias_node_info() {
  $items = array(
    'noticia' => array(
      'name' => t('Noticia'),
      'base' => 'node_content',
      'description' => t('Utilice este tipo de contenido para gestionar el contenido de las noticias'),
      'has_title' => '1',
      'title_label' => t('Noticias'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
