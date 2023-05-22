#pragma once
#include "Obstaculo.h"

namespace Entidades
{
	namespace Obstaculos
	{
		class Obstaculo_Facil : public Obstaculo
		{
		public:
			Obstaculo_Facil();
			~Obstaculo_Facil();
			void executar();
		};
	}
}