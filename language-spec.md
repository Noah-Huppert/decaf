#General Syntax
Every line must end with a semicolon(`;`).  
There must be at least one space between each keyword. However there can be many more if need be.


#Token Types
##SCOPE
A keyword describing the scope of an object. See [Scopes](#scopes) for more details

##TYPE
A keyword describing the type of a variable. See [Types](#types) for more details

##REFERENCE
A keyword that represents a value. Any alpha numeric characters 
Ex: `foo` or `bazz` 

##CALL
A keyword that references a function. Any alpha numeric characters followed by closing and opening parenthesis  
Ex: `foo()` or `bazz()`

##INSTANCE_CREATOR
A keyword that creates a new instance of a class.  
Ex: `new ClassName()`;

##TYPE_CLASS
A keyword that marks the following as a `class`. This name can be deceiving, you can not make a variable with a type of `class`.
Ex: `class foo {}`

##START_BLOCK
A keyword marking the start of a code block. In this case the starting curly bracket.  
Ex: `{`

##END_BLOCK
A keyword marking the end of a code block. In this case the ending curly bracket.  
Ex: `}`

##SYMBOL
A character representing a special action. See [Symbols](#symbols) for more details


#Types
##String
**Type keyword**: `string`  
**Inline usage**: Quotes, ex: `"this is an inline string"`  

##Integer
**Type keyword**: `int`  
**Inline usage**: Plain number, ex: `123`

##Float
**Type keyword**: `float`  
**Inline usage**: Number with decimal, ex: `1.23`

##Boolean
**Type keyword**: `boolean`  
**Inline usage**: Setting to keyword `true` or `false`  


#Scopes
##Public
**Scope Keyword**: `public`
**Accessible Via**: `self` and `external` if instance of object  

##Private
**Scope Keyword**: `private`  
**Accessible Via**: `self`

##Static
**Scope Keyword**: `static`  
**Accessible Via**: `self` and `external` always


#Symbols
##Add
**Symbol Keyword**: `+`  
**Symbol Action**: Adds two objects together

##Subtract
**Symbol Keyword**: `-`  
**Symbol Action**: Subtracts two object. The object on the right is subtracted from the object on the left.

##Equals
**Symbol Keyword**: `=`  
**Symbol Action**: Sets the object on the left equal to the object on the right.

##Greater Than
**Symbol Keyword**: `>`  
**Symbol Action**: Checks to see if the object on the left is greater than the object on the right.

##Less Than
**Symbol Keyword**: `<`  
**Symbol Action**: Checks to see if the object on the left is less than the object on the right.


#Variables
Variables hold values. To create a variable you must follow the following format.  
`<SCOPE> <TYPE> <name>`  
The `<SCOPE>` must be one of the above [scopes](#scopes), it will set the scope of the variable.  
The `<TYPE>` must be one of the above [types](#types), it will set the type of the variable.  
The `<name>` can be any series of alphanumeric characters  
Ex: `public int foo;`  

You can then set the value of the variable  
continuing with the example above: `foo = 123;`