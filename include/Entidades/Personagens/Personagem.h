#pragma once
#include "../Entidade.h"

namespace Entidades
{
	namespace Personagens
	{
		class Personagem : public Entidade
		{
		protected:
			int vidas;
			sf::Vector2f velocidade;
		public:
			Personagem();
			~Personagem();
			const int getVidas();
			virtual void executar() = 0;
		};
	}
}