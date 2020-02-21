#pragma once
#include<SFML/Graphics.hpp>
#include<vector>
#include<iostream>

class OptionSelect
{
	enum Behaviour {
		Hover, Cursor, HoverCursor
	};

private:
	Behaviour settings;
	sf::Text* cursorPtr; 
	sf::Vector2u position;
	std::vector<sf::Text> options;
	unsigned optionHeight;


	//MODEL
	sf::Text notSelected, selected;


	void styleBefore();
	void styleAfter();
	void increment();
	void decrement();
public:
	OptionSelect(std::vector<std::string> options, sf::Font& font, sf::Vector2u position, Behaviour settings = HoverCursor);
	void draw(sf::RenderTarget* window);
	void update();
	void next();
	void prev();
	void select();
};
