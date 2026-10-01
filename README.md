FOOD DETECTIVES' Snack Allergen Checker is a C++ program that helps users identify common allergens found in packaged snacks. 
Users can check a snack's allergens, view the available snack database, or search for snacks containing a specific allergen. 
The program uses a simple database and search functions to provide the information quickly.


## Snack List

The program contains a database of 110 packaged snack examples and their common allergens.

| No. | Snack                  | Common Allergens              |
| --: | ---------------------- | ----------------------------- |
|   1 | Chocolate bar          | Milk, Soy                     |
|   2 | Milk chocolate         | Milk, Soy                     |
|   3 | Dark chocolate         | Soy, Milk                     |
|   4 | White chocolate        | Milk, Soy                     |
|   5 | Chocolate wafer        | Wheat, Milk, Soy              |
|   6 | Chocolate cookies      | Wheat, Milk, Soy, Egg         |
|   7 | Chocolate biscuits     | Wheat, Milk, Soy              |
|   8 | Oreo cookies           | Wheat, Soy                    |
|   9 | Cream biscuits         | Wheat, Milk, Soy              |
|  10 | Butter cookies         | Wheat, Milk, Egg              |
|  11 | Peanut butter crackers | Wheat, Peanuts, Soy           |
|  12 | Peanut cookies         | Wheat, Peanuts, Egg           |
|  13 | Peanut candy           | Peanuts, Milk, Soy            |
|  14 | Peanut chocolate       | Peanuts, Milk, Soy            |
|  15 | Peanut wafers          | Wheat, Peanuts, Milk, Soy     |
|  16 | Mixed nut snack        | Peanuts, Tree Nuts            |
|  17 | Almond cookies         | Wheat, Almonds, Egg           |
|  18 | Almond chocolate       | Almonds, Milk, Soy            |
|  19 | Cashew snack           | Cashews                       |
|  20 | Cashew cookies         | Wheat, Cashews, Milk, Egg     |
|  21 | Potato chips           | None                          |
|  22 | Cheese potato chips    | Milk, Soy                     |
|  23 | Sour cream chips       | Milk, Soy                     |
|  24 | Barbecue chips         | Soy, Wheat                    |
|  25 | Salt and vinegar chips | None                          |
|  26 | Chili chips            | Soy                           |
|  27 | Nacho chips            | Milk, Soy                     |
|  28 | Tortilla chips         | None                          |
|  29 | Cheese crackers        | Wheat, Milk, Soy              |
|  30 | Salted crackers        | Wheat, Soy                    |
|  31 | Cheese puffs           | Milk, Soy                     |
|  32 | Cheese balls           | Milk, Soy                     |
|  33 | Corn chips             | None                          |
|  34 | Caramel popcorn        | Milk, Soy                     |
|  35 | Butter popcorn         | Milk                          |
|  36 | Cheese popcorn         | Milk, Soy                     |
|  37 | Microwave popcorn      | Milk, Soy                     |
|  38 | Kettle corn            | None                          |
|  39 | Pretzels               | Wheat, Soy                    |
|  40 | Chocolate pretzels     | Wheat, Milk, Soy              |
|  41 | Granola bar            | Wheat, Milk, Soy, Tree Nuts   |
|  42 | Chocolate granola bar  | Wheat, Milk, Soy              |
|  43 | Peanut granola bar     | Peanuts, Milk, Soy            |
|  44 | Almond granola bar     | Almonds, Milk, Soy            |
|  45 | Nut granola bar        | Tree Nuts, Peanuts, Soy       |
|  46 | Oat bar                | Wheat, Milk, Soy              |
|  47 | Cereal bar             | Wheat, Milk, Soy              |
|  48 | Fruit bar              | None                          |
|  49 | Energy bar             | Milk, Soy, Peanuts            |
|  50 | Protein bar            | Milk, Soy, Peanuts            |
|  51 | Corn flakes            | None                          |
|  52 | Chocolate cereal       | Wheat, Milk, Soy              |
|  53 | Honey cereal           | Wheat                         |
|  54 | Fruit cereal           | Wheat, Soy                    |
|  55 | Granola cereal         | Wheat, Tree Nuts              |
|  56 | Muesli                 | Wheat, Tree Nuts              |
|  57 | Oat cereal             | Wheat                         |
|  58 | Rice cereal            | None                          |
|  59 | Cereal clusters        | Wheat, Milk, Soy              |
|  60 | Chocolate cereal balls | Wheat, Milk, Soy              |
|  61 | Cup noodles            | Wheat, Soy, Egg               |
|  62 | Instant noodles        | Wheat, Soy, Egg               |
|  63 | Curry noodles          | Wheat, Soy                    |
|  64 | Chicken noodles        | Wheat, Soy                    |
|  65 | Seafood noodles        | Wheat, Soy, Shellfish, Fish   |
|  66 | Spicy noodles          | Wheat, Soy                    |
|  67 | Ramen snack            | Wheat, Soy, Egg               |
|  68 | Fried noodles snack    | Wheat, Soy                    |
|  69 | Instant pasta          | Wheat, Milk, Soy              |
|  70 | Mac and cheese         | Wheat, Milk, Egg              |
|  71 | Vanilla wafer          | Wheat, Milk, Soy, Egg         |
|  72 | Strawberry wafer       | Wheat, Milk, Soy              |
|  73 | Wafer sticks           | Wheat, Milk, Soy              |
|  74 | Cream wafer            | Wheat, Milk, Soy              |
|  75 | Wafer biscuits         | Wheat, Milk, Soy              |
|  76 | Rice crackers          | Soy                           |
|  77 | Sesame crackers        | Wheat, Sesame, Soy            |
|  78 | Seaweed crackers       | Soy, Sesame                   |
|  79 | Cheese biscuit         | Wheat, Milk, Soy              |
|  80 | Salt biscuit           | Wheat                         |
|  81 | Doughnut               | Wheat, Milk, Egg, Soy         |
|  82 | Packaged muffin        | Wheat, Milk, Egg, Soy         |
|  83 | Chocolate muffin       | Wheat, Milk, Egg, Soy         |
|  84 | Banana muffin          | Wheat, Milk, Egg              |
|  85 | Cupcake                | Wheat, Milk, Egg, Soy         |
|  86 | Chocolate cupcake      | Wheat, Milk, Egg, Soy         |
|  87 | Sponge cake            | Wheat, Egg, Milk              |
|  88 | Pound cake             | Wheat, Milk, Egg              |
|  89 | Cheesecake             | Wheat, Milk, Egg              |
|  90 | Brownie                | Wheat, Milk, Egg, Soy         |
|  91 | Ice cream cup          | Milk, Egg, Soy                |
|  92 | Ice cream sandwich     | Wheat, Milk, Egg, Soy         |
|  93 | Chocolate ice cream    | Milk, Soy                     |
|  94 | Vanilla ice cream      | Milk, Egg                     |
|  95 | Cookie ice cream       | Wheat, Milk, Egg, Soy         |
|  96 | Frozen yogurt          | Milk                          |
|  97 | Chocolate pudding      | Milk, Soy                     |
|  98 | Vanilla pudding        | Milk, Egg                     |
|  99 | Custard cup            | Milk, Egg                     |
| 100 | Jelly snack            | None                          |
| 101 | Tuna crackers          | Wheat, Fish, Soy              |
| 102 | Chicken snack pack     | Wheat, Soy                    |
| 103 | Fish crackers          | Wheat, Milk, Soy              |
| 104 | Shrimp crackers        | Wheat, Shellfish, Soy         |
| 105 | Seaweed snack          | Soy, Sesame                   |
| 106 | Sesame snack bar       | Sesame, Peanuts               |
| 107 | Trail mix              | Peanuts, Tree Nuts, Soy       |
| 108 | Dried fruit mix        | None                          |
| 109 | Nut and chocolate mix  | Peanuts, Tree Nuts, Milk, Soy |
| 110 | Fruit snacks           | None                          |

> **Note:** The allergens listed are common/typical examples for this project. Actual ingredients and allergens may vary depending on the brand, flavour, and country. Users should always check the actual product packaging for accurate allergen information.
