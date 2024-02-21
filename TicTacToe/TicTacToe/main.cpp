#include <iostream>
#include "SFML/Graphics.hpp"

int main()
{   
    // Declare and create a new render window
    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");

    // Declare and creates a green circle
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    // The game loop
    while (window.isOpen())
    {
        // Processed events
        sf::Event event;
        while (window.pollEvent(event))
        {
            // Request for closing the window
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Clear the window before rendering next frame
        window.clear();

        // Render the green circle
        window.draw(shape);

        // End the current frame and display the contents on screen
        window.display();
    }

	return 0;
}