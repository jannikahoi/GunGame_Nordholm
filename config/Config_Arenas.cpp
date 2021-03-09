class base_arena {
	name = "";
	center[] = {0,0,0};
	radius = 100;
	spawns[] = { {0,0,0} };

	list_whitelist[] = {}; // empty whitelist means all lists are allowed
	loadout_whitelist[] = {"black","slav"}; // empty whitelist means all loadouts are allowed
};

class Arenas {

	class village : base_arena {
		name = "Dorf (3-5 Spieler)";
		center[] = {8605.56,8155.65,0.00145626};
		radius = 140;

		spawns[] = {
			{8586.56,8135.23,0.0324385},{8584.94,8143.23,0.494822},{8567.51,8155.38,1.48627},{8547.22,8174.15,0.287678},{8542.58,8177.54,0.00139499},{8554.38,8187.42,0.542306},{8547.67,8188.71,0.00140905},{8569.05,8226.78,0.568769},{8573.56,8225.47,0.104301},{8573.73,8213.3,0.548288},{8604.21,8201.41,0.0466461},{8607.58,8184.97,0.493904},{8633.76,8175.35,0.00140285},{8624.2,8160.36,0.309246},{8601.88,8163.68,0.242363},{8601.2,8137.71,0.262517},{8633.56,8144.06,0.329738},{8662.17,8138.34,0.0014658},{8661.54,8128.37,0.00145674},{8670.81,8096.51,0.00142431},{8656.31,8102.98,10.1182},{8667.09,8098.03,10.1279}
		};
	};

	class winter : base_arena {
		name = "Kupfermine (3-5 Spieler)";
		center[] = {13464.6,1545.98,0.00144958};
		radius = 100;
		loadout_whitelist[] = {"white"};

		spawns[] = {
			{13538.3,1570.24,0.422241},{13527.7,1550.8,0.273422},{13505.1,1568.04,0.00143433},{13492.6,1552.92,0.0500488},{13507.5,1534.61,0.0607758},{13501.2,1502.13,0.00143433},{13457.7,1544.94,0.00143433},{13472.8,1558.3,0.108353},{13455.8,1592.7,0.0012207},{13416.7,1611.04,0.00137329},{13420.3,1574.57,0.4},{13428,1544,0.00143433},{13423.2,1530.56,1.0},{13400.7,1550.7,0.00143433},{13396.7,1521.79,0.00143433},{13433.3,1491.44,0.00120544},{13449.7,1533.15,0.433975}
		};
	};
	
	class tortuga_church : base_arena {
        name = "Tortuga Kirche (3-6 Spieler)";
        center[] = {4416.274,12568.337,0.00143886};
        radius = 240;
		loadout_whitelist[] = {"slav","taliban","tortuga"};

        spawns[] = {
            {4447.435, 12522.755, 0.00143886},{4399.321, 12519.258, 0.838},{4384.269, 12612.853, 6.774},{4404.847, 12599.09, 6.236},{4426.26, 12618.374, 2.105},{4424.114, 12611.044, 0.584},{4458.667, 12566.349, 0.00143886},{4409.73, 12518.207, 1.632},{4430.646, 12545.129, 31.458},{4412.666, 12545.188, 31.458},{4421.912, 12566.623, 25.883},{4383.128, 12605.021, 24.431},{4381.421, 12526.567, 17.910},{4367.146, 12588.905, 5.010},{4447.538, 12588.249, 0.582},{4439.686, 12577.342, 6.665}
        };
    };

	class tonoa : base_arena {
		name = "Tonoa (4-6 Spieler)";
		center[] = {516.373,1567.419,0.00148344};
		radius = 100;

		spawns[] = {
			{496.293,1546.22,0.142033},{506.827,1539.74,3.48513},{512.948,1537.07,0.262585},{527.694,1542.57,0.186196},{532.244,1551.02,3.71004},{517.884,1576.92,3.21844},{520.54,1569.63,3.10526},{517.432,1574.11,0.326439},{501.731,1566.2,0.326439},{509.493,1551.58,3.21531},{514.795,1552.53,0.378797},{494.001,1569.13,0.0978904},{485.838,1562.46,0.0978904},{465.213,1578.03,0.186196},{444.921,1567.51,0.327608},{440.982,1584.65,0.325781},{424.199,1598.6,1.99841},{444.007,1599.46,0.264514},{454.8,1616.36,0.121548},{471.005,1638.04,0.343828},{481.971,1649.39,0.447832},{501.029,1652.88,0.00153649},{511.526,1663.78,0.00145817},{523.47,1612.83,1.30279},{553.263,1601.43,0.00145638},{490.502,1590.28,0.0883076},{496.864,1582.96,0.0655723},{492.451,1587.06,3.38859},{499.257,1580.83,3.38771}
		};
	};
	
	
	class insel : base_arena {
		name = "Insel (4-6 Spieler)";
		center[] = {8305.447,7247.712,0.00143886};
		radius = 140;

		spawns[] = {
			{8366.525, 7227.245, 0.00143886},{8371.518, 7170.493, 0.00143886},{8335.633, 7147.626, 0.00143886},{8282.106, 7091.480, 0.00143886},{8256.167, 7153.112, 0.00143886},{8250.388, 7199.436, 0.00143886},{8225.256, 7260.364, 0.00143886},{8229.988, 7276.024, 0.00143886},{8284.063, 7319.821, 0.00143886},{8339.369, 7281.722, 0.00143886},{8350.810, 7281.234, 0.00143886},{8357.441, 7269.895, 0.00143886},{8335.657, 7250.011, 0.00143886},{8273.761, 7264.553, 0.00143886},{8267.656, 7261.352, 0.00143886},{8411.17, 7197.277, 0.00143886},{8346.898, 7172.265, 0.00143886},{8332.359, 7183.438, 0.00143886},{8333.252, 7183.237, 3.005},{8328.333, 7180.828, 0.114},{8301.263, 7236.091, 0.00143886},{8308.254, 7222.961, 0.00143886},{8322.181, 7226.013, 0.299},{8310.79, 7217.02, 3.700},{8324.32, 7224.078, 3.699},{8306.423, 7152.019, 0.00143886},{8312.679, 7163.399, 0.219},{8278.817, 7200.039, 0.092},{8333.102, 7210.984, 0.5},{8337.447, 7202.760, 3.482},{8339.152, 7213.446, 3.307},{8332.076, 7209.205, 3.484},{8343.188, 7165.217, 0.00143886},{8265.041, 7132.494, 0.00143886},{8330.838, 7235.145, 0.00143886},{8309.054, 7215.97, 0.00143886},{8311.965, 7227.165, 0.00143886},{8266.934, 7202.961, 0.00143886}
		};
	};

	class tortuga_mosque : base_arena {
		name = "Landgericht (4-8 Spieler)";
		center[] = {11781.927,6672.975,0.00143886};
		radius = 60;
		loadout_whitelist[] = {"cop"};

		spawns[] = {
			{11754.414, 6645.411, 0.00143814},{11759.652, 6661.923, 0.00143814},{11787.101, 6662.078, 0.00143814},{11827.075, 11827.075, 0.00143814},{11792.59, 6685.589, 0.00143814},{11777.333, 6666.701, 0.104},{11784.988, 6672.858, 0.104},{11777.17, 6688.335, 3.404},{11765.78, 6692.055, 0.104},{11756.369, 6689.049, 0.104},{11751.394, 6679.891, 0.104},{11753.571, 6667.159, 0.104},{11763.711, 6674.276, 0.104},{11772.361, 6666.118, 3.404},{11756.876, 6684.082, 3.404},{11751.817, 6689.319, 3.403},{11763.445, 6684.014, 3.404},{11753.897, 6691.043, 6.654},{11775.004, 6674.147, 6.654},{11811.438, 6674.216, 0.106},
		};
	};
	
	class polizei : base_arena {
		name = "Polizei Hauptquartier (4-8 Spieler)";
		center[] = {10113.804,7473.286,72.389};
		radius = 70;
		loadout_whitelist[] = {"cop"};

		spawns[] = {
			{10105.189,7455.867,8.326},{10085.784,7447.679,6.719},{10075.349,7467.85,0.00143814},{10081.472,7441.992,0.00143814},{10070.089,7852.959,0.00143814},{10070.604,7478.649,0.00143814},{10107.655,7515.320,0.00143814},{10111.28,7521.269,0.072},{10126.352,7533.976,0.00143814},{10157.184,7505.281,0.00143814},{10143.569,7483.071,0.00143814},{10144.605,7492.16,0.00143814},{10147.083,7498.612,0.00143814},{10135.541,7472.663,0.00143814},{10139.944,7474.591,0.00143814},{10111.685,7455.813,0.00143814},{10088.719,7433.822,0.00143814},{10106.455,7450.317,0.032},{10089.457,7444.658,3.371},{10101.545,7468.893,0.00143814},{10149.138,7471.645,0.046},{10130.758,7471.298,0.00143814},{10091.701,7444.256,0.00143814},
			
		};
	};

	class morello : base_arena {
		name = "Morello Bar (4-8 Spieler)";
		center[] = {10230.706,7186.240,0.00143886};
		radius = 50;
		loadout_whitelist[] = {"kartell"};

		spawns[] = {
			{10240.796, 7221.675, 0.00143886},{10234.889, 7205.452, 0.00143886},{10236.146, 7212.888, 3.444},{10231.633, 7208.815, 3.433},{10222.89, 7210.08, 3.433},{10265.555, 7206.717, 0.00143886},{10274.04, 7204.347, 4.981},{10269.73, 7194.85, 6.018},{10264.438, 7219.685, 5.608},{10270.936, 7202.252, 2.005},{10258.515, 7221.316, 2.186},{10257.929, 7179.43, 5.229},{10263.429, 7187.397, 5.604},{10258.428, 7178.692, 1.914},{10245.148, 7184.861, 0.00143886},{10240.23, 7176.747, 0.047},{10231.485, 7164.201, 0.044},{10213.521, 7152.646, 0.00143886},{10214.856, 7180.441, 0.225},{10211.119, 7176.762, 0.225},{10185.376, 7180.678, 0.181},{10195.584, 7170.522, 0.199},{10195.196, 7198.399, 0.181},{10218.414, 7187.373, 0.225},{10255.617, 7224.576, 0.00143886},{10222.253, 7152.763, 0.044},
		};
	};
	
	class fabrik : base_arena {
		name = "Fabrik (6-8 Spieler)";
		center[] = {7913.4,6056.88,21.0883};
		radius = 180;

		spawns[] = {
			{7913.4,6056.88,21.0883},{7924.86,6102.55,20.8822},{7905.87,6016.43,10.1},{7908.13,6018.16,3.98},{7972.8,5972.26,1.38741},{8028.95,6074.36,0.00142074},{8030.64,6017.05,0.00139129},{7955.18,6033.52,0.0405841},{7944.83,6037.56,0.0976152},{7973.42,6055.16,1.33779},{7987.53,6052.92,1.3746},{7968.32,6080.74,0.0619426},{7955.96,6084.62,0.0635769},{7947.13,6092.89,0.0367672},{7893,6107.58,0.001472},{7870.15,6107.17,0.225029},{7873.38,6095.34,0.0611351},{7866.16,6097.05,0.0484378},{7852.43,6097.55,0.0465839},{7834.06,6097.98,0.10706},{7924.14,6013.87,0.00144184},{7827.26,6038.42,0.471599},{7831.63,6027.37,0.201895},{7823.33,6034.45,5.95148},{7923.16,6017.87,0.153187},{7915.09,6069.38,20.904},{7922.1,6102.98,20.8745}
		};
	};

	class prison : base_arena {
		name = "Bundesgefängis (8-10 Spieler)";
		center[] = {10674.695,5396.701,0.00143886};
		radius = 120;

		spawns[] = {
			{10579.083, 5394.231, 0.00143886},{10594.792, 5395.26, 0.198},{10584.944, 5418.574, 0.164},{10593.976, 5429.731, 0.00143886},{10612.507, 5430.219, 0.00143886},{10596.21, 5361.198, 0.144},{10593.218, 5356.016, 17.807},{10588.603, 5360.443, 20.278},{10592.175, 5360.941, 6.689},{10617.188, 5376.130, 0.00143886},{10620.386, 5382.033, 0.025},{10626.54, 5379.604, 0.00143886},{10620.312, 5399.594, 0.00143886},{10625.507, 5431.779, 20.278},{10637.707, 5410.480, 0.00143886},{10660.706, 5417.973, 11.48},{10707.495, 5432.331, 20.182},{10712.112, 5426.431, 14.287},{10712.72, 5391.768, 0.00143886},{10707.373, 5365.345, 0.00143886},{10706.794, 5362.808, 20.278},{10691.346, 5365.214, 0.00143886},{10681.063, 5367.263, 0.00143886},{10660.31, 5366.174, 0.00143886},{10622.938, 5362.795, 20.278},{10655.158, 5385.282, 0.00143886},{10661.313, 5381.376, 0.243},{10673.835, 5404.993, 18.153},{10677.07, 5402.177, 18.153},{10622.972, 5419.826, 0.00143886},{10658.103, 5436.682, 0.00143886},{10688.822, 5435.546, 0.00143886},{10588.904, 5355.967, 13.156},{10639.206, 5408.106, 13.156},{10635.963, 5406.776, 3.455}
		};
	};

	class rebellen : base_arena {
		name = "Rebelleninsel (8-10 Spieler)";
		center[] = {8150.438,1456.434,0.00143886};
		radius = 120;

		spawns[] = {
			{8070.391, 1496.792, 0.00143886},{8106.14,1482.334,0.507},{8169.345,1507.584, 0.00143886},{8131.495,1522.875, 0.00143886},{8134.421,1480.148, 0.00143886},{8083.644,1515.089, 0.264},{8088.935,1518.216,0.188},{8060.404,1473.294, 0.00143886},{8041.851,1504.262, 0.00143886},{8068.564,1516.029, 0.00143886},{8106.21,1507.622, 0.00143886},{8191.163,1493.889,6.05},{8184.675,1481.546,0.346},{8180.279,1447.330,4.140},{8210.581,1448.381, 0.00143886},{8166.776,1382.584,9.134},{8163.47,1387.39,13.122},{8220.507,1484.669,6.863},{8083.433, 1456.416, 0.00143886},{8122.714,1467.962,0.320},{8139.936,1447.103, 0.00143886},{8168.237,1388.321, 0.00143886},{8090.120,1470.027, 0.00143886},{8060.461,1499.357,12.531},{8179.234,1474.248,2.670},{8150.725,1436.950, 0.00143886},{8148, 1465.679,0.511},{8155.936,1528.805,0.115},{8094.962,1542.848, 0.00143886},{8103.274,1451.490, 0.00143886},{8158.781,1544.873, 0.00143886}
		};
	};
	
	class hotel : base_arena {
		name = "Hotel (8-10 Spieler)";
		center[] = {6029.208,3005.429,0.00143886};
		radius = 120;

		spawns[] = {
			{6071.576, 3004.895,10.1},{6110.215, 2965.677, 0.00143886},{6149.478, 3030.394, 3.816},{6158.198, 2987.402, 0.594},{6136.023, 3014.514, 0.00143886},{6058.34, 3068.909,13.080},{6050.701, 3041.487,15.252},{5983.291, 3010.658, 3.767},{6149.290, 2960.888,4.272 },{5935.552, 2939.180, 3.776},{6050.313, 3015.867, 10.108},{6049.613, 3024.66, 10.127},{6046.038, 3054.029, 14.426},{6059.279, 3061.833, 14.8},{6097.372, 3055.925, 0.592},{6135.089, 2957.585, 3.774},{5948.143, 2966.851,0.719},{6068.870, 3002.188, 10.108},{6058.770, 3073.694, 3.528},{6049.472, 3061.498, 8.678},{6067.295, 3037.043,9.3},{6156.136, 2980.973, 0.283},{6025.247, 3058.254, 5.376},{6072.157, 3075.07, 0.00143886},{6165.737, 3047.663, 0.00143886},{6084.664, 3029.606, 0.00143886},{6083.833, 2979.456, 4.496},{5960.951, 2989.936, 4.419},{6025.414, 3106.086, 0.00143886},{6123.094, 3016.541, 0.719},{6076.611, 2995.335, 4.154},{6059.151, 3057.039, 9.983},{6177.392, 2959.201, 0.00143886},{6058.63, 3010.68, 14.554},{6096.172, 3017.744, 0.00143886},{6098.769, 3063.272, 0.00143886},{6128.188, 3029.566, 0.325},{6158.679, 3002.294, 0.282},{6028.734, 2984.977, 0.00143886},{5982.322, 3015.183, 0.508},{6126.488, 2975.24 , 0.00143886}
		};
	};

	class hideout : base_arena {
		name = "Gang Versteck (5-10 Spieler)";
		center[] = {13951.172,7537.976,0.00143886};
		radius = 75;

		spawns[] = {
			{13917.1, 7580.87, 0.00143814},{13915.3,7565.08,0.45},{13919.1,7544.79,0.4},{13937.451, 7550.294, 8.835},{13970.256, 7512.987, 12.445},{13970.411, 7513.568, 0.082},{13908.066, 7532.497, 0.446},{13952.581, 7585.596, 0.00143886},{13969.446, 7584.729, 0.00143886},{13988.252, 7584.263, 0.00143886},{13938.461, 7529.56, 0.021},{13935.755, 7495.765, 0.141},{13908.544, 7496.56, 0.00143886},{13918.072, 7508.038, 0.00143886},{13929.935, 7524.808, 0.00143886},{13977.454, 7538.206, 0.128},{13976.645, 7558.518, 0.114},{13941.743, 7581.629, 0.106},{13941.446, 7560.397, 0.00143886},{13977.957, 7584.156, 24.202},{13936.624, 7553.424, 4.841},{13945.398, 7483.904, 0.00143886}
		};
	};

	class nordhorn : base_arena {
		name = "Nordhorn (10-12 Spieler)";
		center[] = {15181.4,10256.9,0.00123787};
		radius = 150;

		spawns[] = {
			{15123.7,10143.3,18.2891},{15131.3,10168.9,0.500535},{15169,10185.2,0.00141335},{15179.5,10211.3,0.00140095},{15217.6,10218.2,1.20271},{15226,10212.1,0.725113},{15246.6,10226.4,0.00179291},{15186.6,10235.2,0.584401},{15159.9,10249.4,0.0152788},{15143.5,10259.8,0.572418},{15097,10248.8,1.46553},{15114.3,10278.8,0.95854},{15217.9,10256.6,0.287935},{15212.4,10279.4,3.23432},{15208.8,10278.3,0.301735},{15253.6,10324.9,0.00152159},{15239.2,10307.4,0.568907},{15217.9,10314.1,0.0943379},{15214,10304.9,0.0381269},{15216.2,10319.5,0.00124836},{15198.3,10320.3,0.47581},{15182.4,10319.9,0.365398},{15173.8,10333.5,0.76253},{15136.5,10369,0.00137997},{15092.6,10329.3,0.205997},{15094.8,10377.3,0.000884533},{15083.3,10316.1,0.6853},{15115.9,10317.3,0.00162458},{15119,10327.6,2.3224},{15150.3,10296.9,0.20648},{15173.6,10302.8,0.215972},{15181.5,10295,4.39767},{15186.8,10279.3,0.0159769}
		};
	};
	
};