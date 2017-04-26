<?php
/**
 * @file
 * aeb_ct_tournament.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function aeb_ct_tournament_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create tournament content'.
  $permissions['create tournament content'] = array(
    'name' => 'create tournament content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any tournament content'.
  $permissions['delete any tournament content'] = array(
    'name' => 'delete any tournament content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own tournament content'.
  $permissions['delete own tournament content'] = array(
    'name' => 'delete own tournament content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any tournament content'.
  $permissions['edit any tournament content'] = array(
    'name' => 'edit any tournament content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own tournament content'.
  $permissions['edit own tournament content'] = array(
    'name' => 'edit own tournament content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
