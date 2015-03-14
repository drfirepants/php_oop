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
    public $postal_code;

    // Name of the Country
    public $country_name;

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