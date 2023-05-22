#pragma once
#include "Personagem.h"

namespace Entidades
{
	namespace Personagens
	{
		class Inimigo : public Personagem
		{
		protected:
			int dificuldade;
		public:
			Inimigo();
			~Inimigo();
			virtual void executar() = 0;
		};
	}
}