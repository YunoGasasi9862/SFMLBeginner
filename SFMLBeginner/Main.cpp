#include <iostream>

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

int main()
{

	//Window

	sf::RenderWindow window(sf::VideoMode(1920, 1080), "Game 1", sf::Style::Titlebar
	| sf::Style::Close); //titlebar will not let you resize
	//gives you a title bar with just a close button

	sf::Event events;

	//Game loop
	// while(window.isOpen())
	//{

	//	//Event polling
	//	while (window.pollEvent(events)) //while there are events still polling in the window, pass them here and save
	//	{
	//		switch (events.type)
	//		{
	//		case sf::Event::Closed: //if the user has pressed the cross button
	//			window.close();
	//			break;

	//		case sf::Event::KeyPressed:
	//			if (events.key.code == sf::Keyboard::Escape)
	//			{
	//				window.close();
	//			}
	//			break;
	//		}
	//	}


	while (window.isOpen())
	{

		while (window.pollEvent(events))
		{
			switch (events.type)
			{
			case sf::Event::Closed:
				window.close();
				break;

			case sf::Event::KeyPressed:
				if (events.key.code == sf::Keyboard::Escape)
				{
					window.close();
				}
				break;
			}
		}
		//Update



		//Render
		window.clear(sf::Color::Magenta); //clear old frames

		//draw your game (always between the two)

		window.display(); //render new frames

	//end of application
	}


	return 0;
}