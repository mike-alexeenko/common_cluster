<?php
/**
 * @file
 * common_cluster.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function common_cluster_user_default_roles() {
  $roles = array();

  // Exported role: journalist.
  $roles['journalist'] = array(
    'name' => 'journalist',
    'weight' => 3,
  );

  return $roles;
}
