#pragma once
#include <SFML/Graphics.hpp>

namespace Entidades
{
	class Entidade
	{
	protected:
		sf::RectangleShape corpo;
	public:
		Entidade(const sf::RectangleShape corpo);
		Entidade();
		~Entidade();
		const sf::RectangleShape getCorpo();
		virtual void executar() = 0;
	};
}