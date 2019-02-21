<?php

/**
 * Implementation of hook_rules_event_info()
 * rules_invoke_event('mail_logger_mail_sent', $message, $sender, $recipient, $user);
 */
function mail_logger_rules_event_info() {
  return array(
    'mail_logger_mail_sent' => array(
      'label' => t('An e-mail has been sent and logged'),
      'module' => 'mail_logger',
      'group' => 'Mail logger',
      'variables' => array(
        'mail-logger-message' => array('type' => 'text', 'label' => t('Mail logger - message')),
        'mail-logger-sender' => array('type' => 'text', 'label' => t('Mail logger - sender')),
        'mail-logger-recipient' => array('type' => 'text', 'label' => t('Mail logger - recipient')),
        'mail-logger-user' => array('type' => 'user', 'label' => t('Mail logger - user')),
      ),
    ),
  );
}
