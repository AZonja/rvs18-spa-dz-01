#include <SFML/Graphics.hpp>
#include "Cvijet.h"
#include<iostream>
using namespace std;


int main()
{
	sf::RenderWindow window(sf::VideoMode(400, 400), "Hello, SFML world!");
	window.setFramerateLimit(60);
	Cvijet cvijet(window);
	sf::Event event;
	sf::Clock sat;
	while (window.isOpen())
	{
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		window.clear();
		cvijet.draw();
		window.display();
	}

	return 0;
}