#pragma once
#include "Inimigo.h"

namespace Entidades
{
	namespace Personagens
	{
		class Inimigo_Facil : public Inimigo
		{
		public:
			Inimigo_Facil();
			~Inimigo_Facil();
			void executar();
		};
	}
}