/// <summary>
/// author Dean Behan
/// </summary>
#ifndef GAME_HPP
#define GAME_HPP
/// <summary>
/// include guards used so we don't process this file twice
/// same as #pragma once
/// Don't forget the endif at the bottom
/// </summary>
#include <SFML/Graphics.hpp>

class Game
{
public:
	Game();
	~Game();
	/// <summary>
	/// main method for game
	/// </summary>
	void run();

private:

	void processEvents();
	void processKeys(sf::Event t_event);
	void update(sf::Time t_deltaTime);
	void render();
	void moveTarget();
	void setupFontAndText();
	void setupSprite();
	void animationGumba();

	sf::RenderWindow m_window; // main SFML window
	sf::Font m_ArialBlackfont; // font used by message
	sf::Text m_welcomeMessage; // text used for message on screen
	sf::Texture m_logoTexture; // texture used for sfml logo
	sf::Sprite m_logoSprite; // sprite used for sfml logo
	sf::RectangleShape m_wall;//wall hot box
	sf::RectangleShape m_target;// target hit box
	sf::Vector2f m_targetLocation; // location of target

	sf::Vector2f m_targetVelocity{ 0.6f,0.0f }; // velocity of the target
	sf::Texture m_gumbaTexture;//texture of gumba
	sf::Sprite m_gumbaSprite;//Sprite of gumba
	bool m_exitGame; // control exiting game
	

	//animation variables
	int m_gumbaFrame{ -1 };
	const int GUMBA_FRAMES = 20;
	float m_gumbaFrameCounter = 0.0f;
	float m_gumbaFrameIncrement = 0.3f;

};

#endif // !GAME_HPP

