<?php
/**
 * @file
 * aeb_ct_tournament.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function aeb_ct_tournament_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function aeb_ct_tournament_node_info() {
  $items = array(
    'tournament' => array(
      'name' => t('Tournament'),
      'base' => 'node_content',
      'description' => t('Ce type de contenu permettra la création d\'une page de compétition'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_paragraphs_info().
 */
function aeb_ct_tournament_paragraphs_info() {
  $items = array(
    'competition' => array(
      'name' => 'Competition',
      'bundle' => 'competition',
      'locked' => '1',
    ),
    'planning' => array(
      'name' => 'Planning',
      'bundle' => 'planning',
      'locked' => '1',
    ),
  );
  return $items;
}
