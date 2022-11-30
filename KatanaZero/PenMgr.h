#pragma once
class PenMgr
{
private:
	PenMgr();
	~PenMgr();

public:
	static PenMgr* Create() { static PenMgr p; return &p; }

	void Initialize();
	HPEN GetGreenPen() { return GreenPen; }
	HPEN GetRedPen() { return RedPen; }
	HBRUSH GetSkyBrush() { return SkyBrush; }
	HBRUSH GetYellowBrush() { return YellowBrush; }
	HBRUSH GetBrush(PenColor c)
	{
		switch (c)
		{
		case PenColor::SKY:
			return SkyBrush;
			break;

		case PenColor::YELLOW:
			return YellowBrush;
			break;

		case PenColor::MAGENTA:
			return MagentaBrush;
			break;
		}

		return 0;
	}

private:
	HPEN GreenPen = 0;
	HPEN RedPen = 0;
	HBRUSH SkyBrush = 0;
	HBRUSH YellowBrush = 0;
	HBRUSH MagentaBrush = 0;
};

