#pragma once
#include <SFML/Graphics.hpp>
#include "Entidade.h"

namespace Entidades
{
	class Projetil : public Entidade
	{
	private:
		int dano;
		sf::Vector2f velocidade;
	public:
		Projetil();
		~Projetil();
		const int getDano();
		void executar();
	};
}