#include "State.h"



State::State(sf::RenderWindow* window, sf::Event& event, AssetManager& manager)
	:
	event(event),
	manager(manager)
{
	this->window = window;
}


State::~State()
{
}

void State::checkQuit()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::BackSpace))
		this->setting = Exiting;
}

const bool State::getQuit() const
{
	return (setting == Exiting);
}