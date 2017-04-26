<?php
/**
 * @file
 * aeb_ct_tournament.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function aeb_ct_tournament_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-tournament-body'.
  $field_instances['node-tournament-body'] = array(
    'bundle' => 'tournament',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-tournament-field_tournament_coach_comment'.
  $field_instances['node-tournament-field_tournament_coach_comment'] = array(
    'bundle' => 'tournament',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Un commentaire du coach vis à vis de l\'objectif de la compétition',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tournament_coach_comment',
    'label' => 'Coach Comment',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 5,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-tournament-field_tournament_participant'.
  $field_instances['node-tournament-field_tournament_participant'] = array(
    'bundle' => 'tournament',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tournament_participant',
    'label' => 'Participant',
    'required' => 1,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'competition' => 'competition',
        'planning' => -1,
      ),
      'bundle_weights' => array(
        'competition' => 2,
        'planning' => 3,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Planning',
      'title_multiple' => 'Plannings',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 7,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-tournament-field_tournament_planning'.
  $field_instances['node-tournament-field_tournament_planning'] = array(
    'bundle' => 'tournament',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Le planning de la compétition.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tournament_planning',
    'label' => 'Planning',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'competition' => -1,
        'planning' => 'planning',
      ),
      'bundle_weights' => array(
        'competition' => 2,
        'planning' => 3,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Planning',
      'title_multiple' => 'Plannings',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 6,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-tournament-field_tournament_rank'.
  $field_instances['node-tournament-field_tournament_rank'] = array(
    'bundle' => 'tournament',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Le rang de la compétition.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tournament_rank',
    'label' => 'Rank',
    'required' => 1,
    'settings' => array(
      'behaviors' => array(
        'taxonomy-index' => array(
          'status' => TRUE,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'paragraphs_item-competition-field_coach'.
  $field_instances['paragraphs_item-competition-field_coach'] = array(
    'bundle' => 'competition',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Le coach qui sera l\'encadrant lors de la compétition pour le groupe de gymnaste ou la gymnaste',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_coach',
    'label' => 'Coach',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 1,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'paragraphs_item-competition-field_date_list'.
  $field_instances['paragraphs_item-competition-field_date_list'] = array(
    'bundle' => 'competition',
    'deleted' => 0,
    'description' => 'La liste des horaires de passage du groupe ou de la gymnaste, date du jour compris (en cas de compétition sur plusieurs jour)',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_date_list',
    'label' => 'Date List',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_select',
      'weight' => 3,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'paragraphs_item-competition-field_participant'.
  $field_instances['paragraphs_item-competition-field_participant'] = array(
    'bundle' => 'competition',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Le groupe ou la gymnaste qui passe à l\'horaire associé',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_participant',
    'label' => 'Participant',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'paragraphs_item-planning-field_comment'.
  $field_instances['paragraphs_item-planning-field_comment'] = array(
    'bundle' => 'planning',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Le commentaire est associé à l\'horaire, pour permettre la mise en place d\'un déroulement pour le début de la compétition. Il vous servira notamment à laissé un planning pour donner rendez-vous avec un horaire et un lieu, dire aux gymnaste d\'aller voir tel personne à tel heure...  ',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_comment',
    'label' => 'Comment',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'paragraphs_item-planning-field_schedule'.
  $field_instances['paragraphs_item-planning-field_schedule'] = array(
    'bundle' => 'planning',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'L\'horaire vous permettra de définir à quel heure vous voulez que le commentaire qui lui est associé soit effectué.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'cck_time',
        'settings' => array(),
        'type' => 'cck_time_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_schedule',
    'label' => 'Schedule',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'cck_time',
      'settings' => array(),
      'type' => 'cck_time_select',
      'weight' => 1,
    ),
    'workbench_access_field' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Coach');
  t('Coach Comment');
  t('Comment');
  t('Date List');
  t('L\'horaire vous permettra de définir à quel heure vous voulez que le commentaire qui lui est associé soit effectué.');
  t('La liste des horaires de passage du groupe ou de la gymnaste, date du jour compris (en cas de compétition sur plusieurs jour)');
  t('Le coach qui sera l\'encadrant lors de la compétition pour le groupe de gymnaste ou la gymnaste');
  t('Le commentaire est associé à l\'horaire, pour permettre la mise en place d\'un déroulement pour le début de la compétition. Il vous servira notamment à laissé un planning pour donner rendez-vous avec un horaire et un lieu, dire aux gymnaste d\'aller voir tel personne à tel heure...  ');
  t('Le groupe ou la gymnaste qui passe à l\'horaire associé');
  t('Le planning de la compétition.');
  t('Le rang de la compétition.');
  t('Participant');
  t('Planning');
  t('Rank');
  t('Schedule');
  t('Un commentaire du coach vis à vis de l\'objectif de la compétition');

  return $field_instances;
}
