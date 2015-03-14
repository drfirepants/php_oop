<?php

require 'class.Address.inc';

echo '<h2>Instantiating Address</h2>';
$address = new Address();


echo '<h2>Empty Address</h2>';
echo '<kbd><pre>' . var_export($address, TRUE) . '</pre></kbd>';

echo '<h2>Testing protected access.</h2>';
echo "Address ID: {$address->_address_id}";