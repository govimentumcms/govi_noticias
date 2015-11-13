<?php
/**
 * @file
 * govi_noticias.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function govi_noticias_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'noticias';
  $view->description = 'Vista que presenta el contenido de una o varias noticias';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Noticias';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Noticias';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Multimedia */
  $handler->display->display_options['fields']['field_multimedia_noticia']['id'] = 'field_multimedia_noticia';
  $handler->display->display_options['fields']['field_multimedia_noticia']['table'] = 'field_data_field_multimedia_noticia';
  $handler->display->display_options['fields']['field_multimedia_noticia']['field'] = 'field_multimedia_noticia';
  $handler->display->display_options['fields']['field_multimedia_noticia']['label'] = '';
  $handler->display->display_options['fields']['field_multimedia_noticia']['element_class'] = 'pure-img';
  $handler->display->display_options['fields']['field_multimedia_noticia']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_multimedia_noticia']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_multimedia_noticia']['settings'] = array(
    'image_style' => 'imagen_noticia_destacada',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_multimedia_noticia']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_multimedia_noticia']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Fecha de publicación */
  $handler->display->display_options['fields']['field_fecha_de_publicacion']['id'] = 'field_fecha_de_publicacion';
  $handler->display->display_options['fields']['field_fecha_de_publicacion']['table'] = 'field_data_field_fecha_de_publicacion';
  $handler->display->display_options['fields']['field_fecha_de_publicacion']['field'] = 'field_fecha_de_publicacion';
  $handler->display->display_options['fields']['field_fecha_de_publicacion']['label'] = '';
  $handler->display->display_options['fields']['field_fecha_de_publicacion']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fecha_de_publicacion']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Copete */
  $handler->display->display_options['fields']['field_copete']['id'] = 'field_copete';
  $handler->display->display_options['fields']['field_copete']['table'] = 'field_data_field_copete';
  $handler->display->display_options['fields']['field_copete']['field'] = 'field_copete';
  $handler->display->display_options['fields']['field_copete']['label'] = '';
  $handler->display->display_options['fields']['field_copete']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_copete']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_copete']['settings'] = array(
    'trim_length' => '200',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Leer más';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'noticia' => 'noticia',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';

  /* Display: block */
  $handler = $view->new_display('block', 'block', 'block_1');
  $handler->display->display_options['block_description'] = 'Últimas noticias principal';

  /* Display: block */
  $handler = $view->new_display('block', 'block', 'block_2');
  $handler->display->display_options['block_description'] = 'Últimas noticias principal';
  $export['noticias'] = $view;

  $view = new view();
  $view->name = 'otras_noticias';
  $view->description = 'Vista que presenta el contenido de una o varias noticias';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Otras noticias';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Multimedia */
  $handler->display->display_options['fields']['field_multimedia_noticia']['id'] = 'field_multimedia_noticia';
  $handler->display->display_options['fields']['field_multimedia_noticia']['table'] = 'field_data_field_multimedia_noticia';
  $handler->display->display_options['fields']['field_multimedia_noticia']['field'] = 'field_multimedia_noticia';
  $handler->display->display_options['fields']['field_multimedia_noticia']['label'] = '';
  $handler->display->display_options['fields']['field_multimedia_noticia']['element_class'] = 'pure-img';
  $handler->display->display_options['fields']['field_multimedia_noticia']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_multimedia_noticia']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_multimedia_noticia']['settings'] = array(
    'image_style' => 'imagen_otras_noticias',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_multimedia_noticia']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_multimedia_noticia']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Fecha de publicación */
  $handler->display->display_options['fields']['field_fecha_de_publicacion']['id'] = 'field_fecha_de_publicacion';
  $handler->display->display_options['fields']['field_fecha_de_publicacion']['table'] = 'field_data_field_fecha_de_publicacion';
  $handler->display->display_options['fields']['field_fecha_de_publicacion']['field'] = 'field_fecha_de_publicacion';
  $handler->display->display_options['fields']['field_fecha_de_publicacion']['label'] = '';
  $handler->display->display_options['fields']['field_fecha_de_publicacion']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fecha_de_publicacion']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Copete */
  $handler->display->display_options['fields']['field_copete']['id'] = 'field_copete';
  $handler->display->display_options['fields']['field_copete']['table'] = 'field_data_field_copete';
  $handler->display->display_options['fields']['field_copete']['field'] = 'field_copete';
  $handler->display->display_options['fields']['field_copete']['label'] = '';
  $handler->display->display_options['fields']['field_copete']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_copete']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_copete']['settings'] = array(
    'trim_length' => '200',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'noticia' => 'noticia',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';

  /* Display: block */
  $handler = $view->new_display('block', 'block', 'block_1');
  $handler->display->display_options['block_description'] = 'Otras noticias';

  /* Display: block */
  $handler = $view->new_display('block', 'block', 'block_2');
  $handler->display->display_options['block_description'] = 'Últimas noticias principal';
  $export['otras_noticias'] = $view;

  return $export;
}
