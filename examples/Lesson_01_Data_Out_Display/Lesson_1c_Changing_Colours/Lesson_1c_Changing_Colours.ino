/************************************************************
  [Annikken Andee]
  ================
  Lesson 1c
  Changing Colours!
  
  Check out our Resources section for more information and 
  ideas on what you can do with the Annikken Andee!
  https://annikken.gitbooks.io/annikken-andee/content/

  Contact us at andee@annikken.com if there are 
  bugs in this sketch or if you need help with the 
  Annikken Andee
************************************************************/

// Always include these libraries. Annikken Andee needs them
// to work with the Arduino!
#include <Andee_for_microbit.h>

// We'll create several display boxes to demonstrate how you
// can make use of the various available colours!
AndeeHelper box1;
AndeeHelper box2;
AndeeHelper box3;
AndeeHelper box4;
AndeeHelper box5;
AndeeHelper box6;
AndeeHelper box7;
AndeeHelper box8;
AndeeHelper box9;
AndeeHelper box10;
AndeeHelper box11;
AndeeHelper box12;

// The setup() function is meant to tell Arduino what to do 
// only when it starts up.
void setup()
{
  Andee.begin();  // Setup communication between Annikken Andee and Arduino
  Andee.clear();  // Clear the screen of any previous displays
  setInitialData(); // Define object types and their appearance
}

// This is the function meant to define the types and the appearance of
// all the objects on your smartphone
void setInitialData()
{
  // There are a few methods to change the colours of your screen objects.
  
  /* Method 1: Using preset themes /////////////////////////////////////
  Here are the preset theme options that you can choose:
  - THEME_TURQUOISE
  - THEME_TURQUOISE_DARK
  - THEME_GREEN
  - THEME_GREEN_DARK
  - THEME_BLUE
  - THEME_BLUE_DARK
  - THEME_PURPLE
  - THEME_PURPLE_DARK
  - THEME_MIDNIGHT
  - THEME_MIDNIGHT_DARK
  - THEME_YELLOW
  - THEME_YELLOW_DARK
  - THEME_ORANGE
  - THEME_ORANGE_DARK
  - THEME_RED
  - THEME_RED_DARK
  - THEME_GREY
  - THEME_GREY_DARK
  - THEME_DEFAULT
  - THEME_DEFAULT_DARK
 
  
  These preset names can be used in:
  - setColor()
  - setTextColor()
  - setTitleColor()
  - setTitleTextColor()
  
  For text colour, you can use:
  - TEXT_DARK
  - TEXT_LIGHT
  */ 
  
  // Here's an example of Method 1
  box1.setId(0);
  box1.setType(DATA_OUT);
  box1.setLocation(0,0,ONE_THIRD); // Row 1, Left
  box1.setTitle("Hello");
  box1.setData("World!");
  // Here's the code to set colours:
  box1.setColor(THEME_TURQUOISE); // Sets the background colour
  box1.setTextColor(TEXT_LIGHT); // Sets the font colour
  // The code below applies ONLY to display boxes. These will set the colour of the display box's title bar
  box1.setTitleColor(THEME_TURQUOISE_DARK); // Title background colour
  box1.setTitleTextColor(TEXT_LIGHT); // Title font colour
  
  // Here's another example using Method 1:
  box2.setId(1);
  box2.setType(DATA_OUT);
  box2.setLocation(0,1,ONE_THIRD); // Row 1, middle
  box2.setTitle("Hello");
  box2.setData("World!");
  // Here's the code to set colours:
  box2.setColor(THEME_PURPLE); // Sets the background colour
  box2.setTextColor(TEXT_LIGHT); // Sets the font colour
  // The code below applies ONLY to display boxes. These will set the colour of the display box's title bar
  box2.setTitleColor(THEME_PURPLE_DARK); // Title background colour
  box2.setTitleTextColor(TEXT_LIGHT); // Title font colour
  
  // Here's another example using Method 1:
  box3.setId(2);
  box3.setType(DATA_OUT);
  box3.setLocation(0,2,ONE_THIRD); // Row 1, right
  box3.setTitle("Hello");
  box3.setData("World!");
  // Here's the code to set colours:
  box3.setColor(THEME_MIDNIGHT); // Sets the background colour
  box3.setTextColor(TEXT_LIGHT); // Sets the font colour
  // The code below applies ONLY to display boxes. These will set the colour of the display box's title bar
  box3.setTitleColor(THEME_MIDNIGHT_DARK); // Title background colour
  box3.setTitleTextColor(TEXT_LIGHT); // Title font colour

  /* Method 2: Using preset colour names ///////////////////////////////////
  Here are the preset colour options that you can use:
  PINK, LIGHT_PINK, HOT_PINK, DEEP_PINK, PALE_VIOLET_RED, MEDIUM_VIOLET_RED, 
  LIGHT_SALMON, SALMON, DARK_SALMON, LIGHT_CORAL, INDIAN_RED, CRIMSON, 
  FIRE_BRICK, DARK_RED, RED, ORANGE_RED, TOMATO, CORAL, DARK_ORANGE,
  ORANGE, GOLD, YELLOW, LIGHT_YELLOW, LEMON_CHIFFON, LIGHT_GOLDENROD_YELLOW,
  PAPAYA_WHIP, MOCCASIN, PEACH_PUFF, PALE_GOLDENROD, KHAKI, DARK_KHAKI, 
  CORNSILK, BLANCHED_ALMOND, BISQUE, NAVAJO_WHITE, WHEAT, BURLYWOOD, TAN	
  ROSY_BROWN, SANDY_BROWN, GOLDENROD, DARK_GOLDENROD, PERU, CHOCOLATE,
  SADDLE_BROWN, SIENNA, BROWN, MAROON, DARK_OLIVE_GREEN, OLIVE, OLIVE_DRAB,
  YELLOW_GREEN, LIME_GREEN, LIME, LAWN_GREEN, CHARTREUSE, GREEN_YELLOW,
  SPRING_GREEN, MEDIUM_SPRING_GREEN, LIGHT_GREEN, PALE_GREEN, DARK_SEA_GREEN,
  MEDIUM_SEA_GREEN, SEA_GREEN, FORREST_GREEN, GREEN, DARK_GREEN, MEDIUM_AQUAMARINE,
  AQUA, CYAN, LIGHT_CYAN, PALE_TURQUOISE, AQUAMARINE, TURQUOISE, MEDIUM_TURQUOISE,
  DARK_TURQUOISE, LIGHT_SEA_GREEN, CADET_BLUE, DARK_CYAN, TEAL, 
  LIGHT_STEEL_BLUE, POWDER_BLUE, LIGHT_BLUE, SKY_BLUE, LIGHT_SKY_BLUE,
  DEEP_SKY_BLUE, DODGER_BLUE, CORNFLOWER_BLUE, STEEL_BLUE, ROYAL_BLUE, BLUE,
  MEDIUM_BLUE, DARK_BLUE, NAVY, MIDNIGHT_BLUE, LAVENDER, THISTLE, PLUM,
  VIOLET, ORCHID, FUCHSIA, MAGENTA, MEDIUM_ORCHID, MEDIUM_PURPLE, BLUE_VIOLET,
  DARK_VIOLET, DARK_ORCHID, DARK_MAGENTA, PURPLE, INDIGO, DARK_SLATE_BLUE,
  SLATE_BLUE, MEDIUM_SLATE_BLUE, WHITE, SNOW, HONEYDEW, MINT_CREAM, AZURE,
  ALICE_BLUE, GHOST_WHITE, WHITE_SMOKE, SEASHELL, BEIGE, OLD_LACE,
  FLORAL_WHITE, IVORY, ANTIQUE_WHITE, LINEN, LAVENDER_BLUSH, MISTY_ROSE,
  GAINSBORO, LIGHTGRAY, SILVER, DARK_GRAY, GRAY, DIM_GRAY, LIGHT_SLATE_GRAY,
  SLATE_GRAY, DARK_SLATE_GRAY, BLACK, TRANSPARENT
 
  WOW! That's a lot of colours that you can play with!
  
  These preset colour names can be used in:
  - setColor()
  - setTextColor()
  - setTitleColor()
  - setTitleTextColor()
  */  
  
  // Here's an example of Method 2
  box4.setId(3);
  box4.setType(DATA_OUT);
  box4.setLocation(1,0,ONE_THIRD); // Row 2, Left
  box4.setTitle("Hello");
  box4.setData("World!");
  // Here's the code to set colours:
  box4.setColor(SKY_BLUE); // Sets the background colour
  box4.setTextColor(GHOST_WHITE); // Sets the font colour
  // The code below applies ONLY to display boxes. These will set the colour of the display box's title bar
  box4.setTitleColor(DEEP_SKY_BLUE); // Title background colour
  box4.setTitleTextColor(GHOST_WHITE); // Title font colour
  
  
  // Here's another example using Method 2:
  box5.setId(4);
  box5.setType(DATA_OUT);
  box5.setLocation(1,1,ONE_THIRD); // Row 2, middle
  box5.setTitle("Hello");
  box5.setData("World!");
  // Here's the code to set colours:
  box5.setColor(CORAL); // Sets the background colour
  box5.setTextColor(LAVENDER_BLUSH); // Sets the font colour
  // The code below applies ONLY to display boxes. These will set the colour of the display box's title bar
  box5.setTitleColor(TOMATO); // Title background colour
  box5.setTitleTextColor(LAVENDER_BLUSH); // Title font colour
  
  // Here's another example using Method 2:
  box6.setId(5);
  box6.setType(DATA_OUT);
  box6.setLocation(1,2,ONE_THIRD); // Row 2, right
  box6.setTitle("Hello");
  box6.setData("World!");
  // Here's the code to set colours:
  box6.setColor(DARK_CYAN); // Sets the background colour
  box6.setTextColor(WHITE); // Sets the font colour
  // The code below applies ONLY to display boxes. These will set the colour of the display box's title bar
  box6.setTitleColor(PALE_TURQUOISE); // Title background colour
  box6.setTitleTextColor(DARK_CYAN); // Title font colour  
  
  /* Method 3: Using ARGB Colour Codes ///////////////////////////////////
  ARGB colour codes are like the hexadecimal colour values that you see
  in web design, but with an added alpha channel. A typical ARGB colour code
  looks like this:
  
    FF114455
    
  The first two characters control the alpha channel (from 00 to FF)
  The next two characters control the red channel (from 00 to FF) 
  The next two characters control the green channel (from 00 to FF) 
  The last two characters control the blue channel (from 00 to FF)   
  
  The ARGB colour codes can be used in:
  - setColor()
  - setTextColor()
  - setTitleColor()
  - setTitleTextColor()
  */  
  
  // Here's an example of Method 3
  box7.setId(6);
  box7.setType(DATA_OUT);
  box7.setLocation(2,0,ONE_THIRD); // Row 3, Left
  box7.setTitle("Hello");
  box7.setData("World!");
  // Here's the code to set colours:
  box7.setColor("FFFFB6C1"); // Sets the background colour
  box7.setTextColor("FFFFFFF0"); // Sets the font colour
  // The code below applies ONLY to display boxes. These will set the colour of the display box's title bar
  box7.setTitleColor("FFFF69B4"); // Title background colour
  box7.setTitleTextColor("FFFFFFF0"); // Title font colour
  
  
  // Here's another example using Method 3:
  box8.setId(7);
  box8.setType(DATA_OUT);
  box8.setLocation(2,1,ONE_THIRD); // Row 3, middle
  box8.setTitle("Hello");
  box8.setData("World!");
  // Here's the code to set colours:
  box8.setColor("FFFFF5EE"); // Sets the background colour
  box8.setTextColor("FF000000"); // Sets the font colour
  // The code below applies ONLY to display boxes. These will set the colour of the display box's title bar
  box8.setTitleColor("FFA9A9A9"); // Title background colour
  box8.setTitleTextColor("FFFFFFFF"); // Title font colour    

  
  // Here's another example using Method 3:
  box9.setId(8);
  box9.setType(DATA_OUT);
  box9.setLocation(2,2,ONE_THIRD); // Row 3, right
  box9.setTitle("Hello");
  box9.setData("World!");
  // Here's the code to set colours:
  box9.setColor("FF778899"); // Sets the background colour
  box9.setTextColor("FFFFFAFA"); // Sets the font colour
  // The code below applies ONLY to display boxes. These will set the colour of the display box's title bar
  box9.setTitleColor("FF2F4F4F"); // Title background colour
  box9.setTitleTextColor("FFFFFAFA"); // Title font colour  
  
  /* You can mix the above three methods! You don't have to stay strictly 
  */  
  
  // Here's an example:
  box10.setId(9);
  box10.setType(DATA_OUT);
  box10.setLocation(3,0,ONE_THIRD); // Row 4, Left
  box10.setTitle("Hello");
  box10.setData("World!");
  // Here's the code to set colours:
  box10.setColor(THEME_RED); // Sets the background colour
  box10.setTextColor("FFFFFFFF"); // Sets the font colour
  // The code below applies ONLY to display boxes. These will set the colour of the display box's title bar
  box10.setTitleColor(THEME_RED_DARK); // Title background colour
  box10.setTitleTextColor(WHITE); // Title font colour
  
  
  // Here's another example:
  box11.setId(10);
  box11.setType(DATA_OUT);
  box11.setLocation(3,1,ONE_THIRD); // Row 4, middle
  box11.setTitle("Hello");
  box11.setData("World!");
  // Here's the code to set colours:
  box11.setColor(THEME_YELLOW); // Sets the background colour
  box11.setTextColor(TEXT_LIGHT); // Sets the font colour
  // The code below applies ONLY to display boxes. These will set the colour of the display box's title bar
  box11.setTitleColor("FFF39C12"); // Title background colour
  box11.setTitleTextColor("FFFFFFFF"); // Title font colour
  
  // You can also use the default Andee theme colours!
  box12.setId(11);
  box12.setType(DATA_OUT);
  box12.setLocation(3,2,ONE_THIRD); // Row 4, right
  box12.setTitle("Hello");
  box12.setData("World!");
  // Here's the code to set colours:
  box12.setColor(THEME_DEFAULT); // Sets the background colour
  box12.setTextColor(WHITE); // Sets the font colour
  // The code below applies ONLY to display boxes. These will set the colour of the display box's title bar
  box12.setTitleColor(THEME_DEFAULT_DARK); // Title background colour
  box12.setTitleTextColor(WHITE); // Title font colour     
}

// Arduino will run instructions here repeatedly until you power it off.
void loop()
{
    box1.update(); // Update to show all the boxes on screen
    box2.update();
    box3.update();
    box4.update();
    box5.update();
    box6.update();
    box7.update();
    box8.update();
    box9.update();
    box10.update();
    box11.update();
    box12.update();

  // A short delay is necessary to give Andee time to communicate with the smartphone
  delay(500); 
}
