
namespace variable_col_size {

	
	
	bool random_col = true;

	float Rain_Red = 255;
	float Rain_Green = 255;
	float Rain_Blue = 255;
	float speed_rdm = 0.6f;


	int R_Health = 255;
	int G_Health = 255;
	int B_Health = 255;
	int healthbar_r = 255;
	int healthbar_g = 255;
	int healthbar_b = 255;
	int bar_health_size = 900;
}
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
namespace void_hook {
	void health_bar()
	{

		//healthbar
		if (*(int*)0x021C1568 > 250)
		{
			variable_col_size::bar_health_size = 900;
			variable_col_size::healthbar_r = 0;
			variable_col_size::healthbar_g = 255;
			variable_col_size::healthbar_b = 0;
		}
		else if (*(int*)0x021C1568 > 190)
		{
			variable_col_size::bar_health_size = 980;
			variable_col_size::healthbar_r = 0;
			variable_col_size::healthbar_g = 130;
			variable_col_size::healthbar_b = 0;
		}
		else if (*(int*)0x021C1568 > 160)
		{
			variable_col_size::bar_health_size = 1020;
			variable_col_size::healthbar_r = 0;
			variable_col_size::healthbar_g = 110;
			variable_col_size::healthbar_b = 0;
		}
		else if (*(int*)0x021C1568 > 140)
		{
			variable_col_size::bar_health_size = 1040;
			variable_col_size::healthbar_r = 0;
			variable_col_size::healthbar_g = 90;
			variable_col_size::healthbar_b = 0;
		}
		else if (*(int*)0x021C1568 > 130)
		{
			variable_col_size::bar_health_size = 1080;
			variable_col_size::healthbar_r = 0;
			variable_col_size::healthbar_g = 40;
			variable_col_size::healthbar_b = 0;
		}
		else if (*(int*)0x021C1568 > 100)
		{
			variable_col_size::bar_health_size = 980;
			variable_col_size::healthbar_r = 255;
			variable_col_size::healthbar_g = 255;
			variable_col_size::healthbar_b = 0;
		}
		else if (*(int*)0x021C1568 > 70)
		{
			variable_col_size::bar_health_size = 1120;
			variable_col_size::healthbar_r = 255;
			variable_col_size::healthbar_g = 108;
			variable_col_size::healthbar_b = 0;
		}
		else if (*(int*)0x021C1568 > 40)
		{
			variable_col_size::bar_health_size = 1150;
			variable_col_size::healthbar_r = 255;
			variable_col_size::healthbar_g = 128;
			variable_col_size::healthbar_b = 0;
		}
		else if (*(int*)0x021C1568 > 10)
		{
			variable_col_size::bar_health_size = 1190;
			variable_col_size::healthbar_r = 255;
			variable_col_size::healthbar_g = 0;
			variable_col_size::healthbar_b = 0;
		}

		ImGui::GetBackgroundDrawList()->AddRectFilled(ImVec2(600, variable_col_size::bar_health_size), ImVec2(590, 1200), ImColor(variable_col_size::healthbar_r, variable_col_size::healthbar_g, variable_col_size::healthbar_b, 255), 1.0f);

	}
	//-----------------------------------------------------------------------------------------------------------------------//
	void health_string()
	{
		if (*(int*)0x021C1568 > 40)
		{
			variable_col_size::G_Health = 0;
			variable_col_size::B_Health = 0;
		}
		else if (*(int*)0x021C1568 > 80)
		{
			variable_col_size::G_Health = 128;
			variable_col_size::B_Health = 0;
		}
		else if (*(int*)0x021C1568 > 250)
		{
			char Health[64];
			sprintf_s(Health, "Health : %i", *(int*)0x021C1568);
			ImGui::GetOverlayDrawList()->AddText(ImVec2(310, 950), ImColor(variable_col_size::Rain_Red, variable_col_size::Rain_Green, variable_col_size::Rain_Blue, 255.f), Health);
		}
		else if (*(int*)0x021C1568 > 100)
		{
			variable_col_size::R_Health = 0;
			variable_col_size::G_Health = 128;
			variable_col_size::B_Health = 0;
		}

		else if (*(int*)0x021C1568 > 190)
		{
			variable_col_size::R_Health = 0;
			variable_col_size::G_Health = 170;
			variable_col_size::B_Health = 0;
		}

		else if (*(int*)0x021C1568 > 170)
		{
			variable_col_size::R_Health = 0;
			variable_col_size::G_Health = 140;
			variable_col_size::B_Health = 0;
		}
		else if (*(int*)0x021C1568 > 90)
		{
			variable_col_size::R_Health = 0;
			variable_col_size::G_Health = 40;
			variable_col_size::B_Health = 0;
		}
		else if (*(int*)0x021C1568 > 10)
		{
			variable_col_size::R_Health = 255;
			variable_col_size::G_Health = 0;
			variable_col_size::B_Health = 0;
		}
		else
		{
			variable_col_size::R_Health = 255;
			variable_col_size::G_Health = 255;
			variable_col_size::B_Health = 255;
		}

	}
}
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
namespace HUD_print {
	void hud_draw()
	{

		char Health[64];
		sprintf_s(Health, "Health : %i", *(int*)0x021C1568);
		ImGui::GetOverlayDrawList()->AddText(ImVec2(310, 950), ImColor(variable_col_size::R_Health, variable_col_size::G_Health, variable_col_size::B_Health, 255), Health);

		char Ammop1[64];
		sprintf_s(Ammop1, "Ammo [#1] : %i / %i", *(int*)0x02342BCC, *(int*)0x02342B90);
		ImGui::GetOverlayDrawList()->AddText(ImVec2(310, 970), ImColor(255, 255, 255, 255), Ammop1);

		char Ammop2[64];
		sprintf_s(Ammop2, "Ammo [#2] : %i / %i", *(int*)0x02342BD4, *(int*)0x02342B98);
		ImGui::GetOverlayDrawList()->AddText(ImVec2(310, 990), ImColor(255, 255, 255, 255), Ammop2);

		char ZM_Views[64];
		sprintf_s(ZM_Views, "Zombies Views : %i", *(int*)0x0103BEC0);
		ImGui::GetOverlayDrawList()->AddText(ImVec2(310, 1010), ImColor(255, 255, 255, 255), ZM_Views);

		char ZM_Map[64];
		sprintf_s(ZM_Map, "Zombies Current : %i", *(int*)0x02330414);
		ImGui::GetOverlayDrawList()->AddText(ImVec2(310, 1030), ImColor(255, 255, 255, 255), ZM_Map);

		char ZM_Point[64];
		sprintf_s(ZM_Point, "Points : %i", *(int*)0x0127C120);
		ImGui::GetOverlayDrawList()->AddText(ImVec2(120, 950), ImColor(255, 128, 0, 255), ZM_Point);

		char ZM_K[64];
		sprintf_s(ZM_K, "Kill's : %i", *(int*)0x0111E194);
		ImGui::GetOverlayDrawList()->AddText(ImVec2(120, 970), ImColor(255, 128, 0, 255), ZM_K);

		char ZM_H[64];
		sprintf_s(ZM_H, "Head Shot : %i", *(int*)0x02347D8C);
		ImGui::GetOverlayDrawList()->AddText(ImVec2(120, 990), ImColor(255, 128, 0, 255), ZM_H);

		char ZM_PREK[64];
		sprintf_s(ZM_PREK, "Perks : %i", *(int*)0x02F60320);
		ImGui::GetOverlayDrawList()->AddText(ImVec2(10, 950), ImColor(0, 255, 255, 255), ZM_PREK);
		char ZM_ROUND[64];
		sprintf_s(ZM_ROUND, "Round : %i", *(int*)0x02F60488);
		ImGui::GetOverlayDrawList()->AddText(ImVec2(10, 970), ImColor(0, 255, 255, 255), ZM_ROUND);

		char Water_V2[64];
		sprintf_s(Water_V2, "*BETA* | DISCORD : 0x4156#6607 | YOUTUBE : AV");
		ImGui::GetOverlayDrawList()->AddText(ImVec2(0, 900), ImColor(255, 0, 255, 255), Water_V2);

		ImGui::GetBackgroundDrawList()->AddRectFilled(ImVec2(600, 900), ImVec2(0, 1200), ImColor(0, 0, 0, 120));

	}


}
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
