#include <SFML/Graphics.hpp>
#include <cstdio>

#include "WaterShader.hpp"

#define SPLASH_FONT "/usr/share/fonts/truetype/ttf-dejavu/DejaVuSansMono.ttf"

int main(void)
{
  sf::RenderWindow ships(sf::VideoMode(800,600,32),"Ships");
  WaterShader myShader();
  
  ships.setActive();
  
  while(ships.isOpen())
  {
    sf::Event currentEvent;
    sf::Font splashFont;
    
    
    if(!splashFont.loadFromFile(SPLASH_FONT))
    {
      fprintf(stderr,"Error: Font not found: %s\n",SPLASH_FONT);
      return EXIT_FAILURE;
    }
    
    sf::Text splashText("Ships",splashFont,50);
    
    splashText.setPosition(400 - splashText.getGlobalBounds().width,300 -
splashText.getGlobalBounds().height);
    
    ships.display();
    while(ships.pollEvent(currentEvent))
    {
      if(currentEvent.type == sf::Event::Closed ||
         (currentEvent.type == sf::Event::KeyPressed &&
         currentEvent.key.code == sf::Keyboard::Escape)
      )
      {
        ships.close();
      }
      ships.clear();
      ships.draw(splashText);
    }
  }
  
  return 0;
}