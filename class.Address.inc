<?php


/**
 * Physical Address
 */

class Address {
    // Street Address
    public $street_address_1;
    public $street_address_2;

    // Name of the City
    public $city_name;

    // Name of the Subdivision
    public $subdivision_name;

    // Postal Code
    protected $_postal_code;

    // Name of the Country
    public $country_name;

    // Primary key of an address
    protected $_address_id;

    // When the record was created and last updated
    protected $_time_created;
    protected $_time_updated;

    /**
     * Magic __get
     */
    function __get($name) {
        //posyal code lookup if unset
        if (!$this->_postal_code) {
            $this->_postal_code = $this->_postal_code_guess();
        }

        //Attempt to return a protected property by name.
        $protected_property_name = ' ' . $name;
        if (property_exists($this, $protected_property_name)) {
            return $this->$protected_property_name;
        }

        //Unable to access property; trigger error
        trigger_error('Undefined properrty via __get: ' . $name);
        return NULL;
    }

    /**
     * Guess th postal code given the subdivision and city name.
     */
    protected function _postal_code_guess() {
        return 'LOOKUP';
    }

    /**
     * Display an address in HTML
     */
    function display() {
        $output = '';

        // Output street address
        $output .= $this->street_address_1;
        if ($this->street_address_2) {
            $output .= '<br/>' . $this->street_address_2;
        }

        //City, Subdivision, Postal
        $output .= '<br/>';
        $output .= $this->city_name . ', ' . $this->subdivision_name;
        $output .= ' ' . $this->postal_code;

        //Country
        $output .= '<br/>';
        $output .= $this->country_name;

        return $output;
    }
}