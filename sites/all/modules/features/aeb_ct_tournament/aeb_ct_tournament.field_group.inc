<?php
/**
 * @file
 * aeb_ct_tournament.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function aeb_ct_tournament_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_competition|paragraphs_item|competition|form';
  $field_group->group_name = 'group_competition';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'competition';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Competition ',
    'weight' => '0',
    'children' => array(
      0 => 'field_coach',
      1 => 'field_participant',
      2 => 'field_date_list',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-competition field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_scheduling|paragraphs_item|planning|form';
  $field_group->group_name = 'group_scheduling';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'planning';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Scheduling',
    'weight' => '0',
    'children' => array(
      0 => 'field_schedule',
      1 => 'field_comment',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-scheduling field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tournament_comment|node|tournament|form';
  $field_group->group_name = 'group_tournament_comment';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tournament';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tournament_general';
  $field_group->data = array(
    'label' => 'Comment',
    'weight' => '3',
    'children' => array(
      0 => 'field_tournament_coach_comment',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-tournament-comment field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tournament_general|node|tournament|form';
  $field_group->group_name = 'group_tournament_general';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tournament';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'General',
    'weight' => '0',
    'children' => array(
      0 => 'field_tournament_rank',
      1 => 'title',
      2 => 'group_tournament_comment',
      3 => 'group_tournament_planning',
      4 => 'group_tournament',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'label' => 'General',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-tournament-general field-group-tabs',
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tournament_planning|node|tournament|form';
  $field_group->group_name = 'group_tournament_planning';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tournament';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tournament_general';
  $field_group->data = array(
    'label' => 'Planning',
    'weight' => '4',
    'children' => array(
      0 => 'field_tournament_planning',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-tournament-planning field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tournament|node|tournament|form';
  $field_group->group_name = 'group_tournament';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tournament';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tournament_general';
  $field_group->data = array(
    'label' => 'Tournament',
    'weight' => '5',
    'children' => array(
      0 => 'field_tournament_participant',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-tournament field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups[''] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Comment');
  t('Competition ');
  t('General');
  t('Planning');
  t('Scheduling');
  t('Tournament');

  return $field_groups;
}
