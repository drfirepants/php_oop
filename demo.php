<?php

require 'class.Address.inc';

echo '<h2>Instantiating Address</h2>';
$address = new Address();


echo '<h2>Empty Address</h2>';
echo '<tt><pre></pre>' . var_export($address, TRUE) . '</pre></tt>';