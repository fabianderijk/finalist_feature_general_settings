<?php
/**
 * @file
 * finalist_feature_general_settings.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function finalist_feature_general_settings_user_default_roles() {
  $roles = array();

  // Exported role: admin.
  $roles['admin'] = array(
    'name' => 'admin',
    'weight' => '2',
  );

  return $roles;
}
