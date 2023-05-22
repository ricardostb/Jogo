#pragma once
#include "Inimigo.h"

namespace Entidades
{
	namespace Personagens
	{
		class Inimigo_Dificil : public Inimigo
		{
		public:
			Inimigo_Dificil();
			~Inimigo_Dificil();
			void executar();
		};
	}
}