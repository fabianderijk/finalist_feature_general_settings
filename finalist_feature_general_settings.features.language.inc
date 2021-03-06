<?php
/**
 * @file
 * finalist_feature_general_settings.features.language.inc
 */

/**
 * Implements hook_locale_default_languages().
 */
function finalist_feature_general_settings_locale_default_languages() {
  $languages = array();

  // Exported language: nl.
  $languages['nl'] = array(
    'language' => 'nl',
    'name' => 'Dutch',
    'native' => 'Nederlands',
    'direction' => '0',
    'enabled' => '1',
    'plurals' => '2',
    'formula' => '($n!=1)',
    'domain' => '',
    'prefix' => 'nl',
    'weight' => '0',
  );
  return $languages;
}
