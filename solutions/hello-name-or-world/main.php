<?php

function hello($name = "World"): string {
  if (strlen($name)==0) $name = "World";
   
  $name = ucfirst(strtolower($name));  
    
  return "Hello, {$name}!";
}