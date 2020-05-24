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
			{13538.3,1570.24,0.422241},{13527.7,1550.8,0.273422},{13505.1,1568.04,0.00143433},{13492.6,1552.92,0.0500488},{13507.5,1534.61,0.0607758},{13501.2,1502.13,0.00143433},{13457.7,1544.94,0.00143433},{13472.8,1558.3,0.108353},{13455.8,1592.7,0.0012207},{13416.7,1611.04,0.00137329},{13418.3,1574.57,0.00143433},{13428,1544,0.00143433},{13423.2,1530.56,0.00143433},{13400.7,1550.7,0.00143433},{13396.7,1521.79,0.00143433},{13433.3,1491.44,0.00120544},{13449.7,1533.15,0.433975}
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
            name = "Tortuga Moschee (4-8 Spieler)";
            center[] = {5121.483,12606.468,0.00143886};
            radius = 240;
    		loadout_whitelist[] = {"slav","taliban","tortuga"};

            spawns[] = {
                {5117.855, 12643.51, 6.780},{5101.969, 12633.229, 3.690},{5107.375, 12626.228, 0.00143886},{5098.384, 12631.355, 0.00143886},{5107.575, 12637.685, 15.213},{5164.963, 12603.234, 5.321},{5166.086, 12603.107, 0.00143886},{5131.967, 12651.371, 1.511},{5163.005, 12603.219, 16.357},{5136.84, 12576.177, 4.215},{5107.025, 12586.68, 5.606},{5072.513, 12612.64, 1.691},{5079.654, 12616.82, 1.248},{5150.515, 12601.848, 0.870},{5119.392, 12622.269, 9.92},{5130.341, 12606.612, 9.92},{5138.583, 12611.044, 5.305},{5126.257, 12628.589, 5.305},{5127.405, 12626.686, 0.00143886},{5112.397, 12600.873, 0.115},{5141.461, 12621.991, 0.101},{5122.548, 12602.321, 0.033},{5123.722, 12600.654, 5.305},{5111.416, 12618.067, 5.305},{5077.648, 12617.469, 16.625}
            };
        };
	
	class polizei : base_arena {
		name = "Polizei Hauptquartier! (4-8 Spieler)";
		center[] = {10066.729,7870.65,72.389};
		radius = 60;
		loadout_whitelist[] = {"cop"};

		spawns[] = {
			{10068.3,7902.24,0.00143814},{10083.4,7893.15,0.00143814},{10071.3,7883.38,0.107227},{10070.2,7861.72,0.00143814},{10046.6,7854.27,0.00143814},{10043.5,7879.32,0.00143814},{10044,7839.8,0.0524445},{10057,7825.18,0.0524445},{10078.4,7839.51,0.0524445},{10077.9,7848.01,0.0524445},{10100.9,7892.71,0.00144196},{10065.8,7817.55,0.0121422},{10074.6,7847.11,8.34584},{10055.7,7829.7,6.73923}
		};
	};
	
	class fabrik : base_arena {
		name = "Fabrik (6-8 Spieler)";
		center[] = {7913.4,6056.88,21.0883};
		radius = 180;

		spawns[] = {
			{7913.4,6056.88,21.0883},{7924.86,6102.55,20.8822},{7906.06,6016.13,16.7667},{7908.13,6018.16,6.64843},{7972.8,5972.26,1.38741},{8028.95,6074.36,0.00142074},{8030.64,6017.05,0.00139129},{7955.18,6033.52,0.0405841},{7944.83,6037.56,0.0976152},{7973.42,6055.16,1.33779},{7987.53,6052.92,1.3746},{7968.32,6080.74,0.0619426},{7955.96,6084.62,0.0635769},{7947.13,6092.89,0.0367672},{7893,6107.58,0.001472},{7870.15,6107.17,0.225029},{7873.38,6095.34,0.0611351},{7866.16,6097.05,0.0484378},{7852.43,6097.55,0.0465839},{7834.06,6097.98,0.10706},{7823.66,6060.29,0.00148761},{7827.26,6038.42,0.471599},{7831.63,6027.37,0.201895},{7823.33,6034.45,5.95148},{7923.16,6017.87,0.153187},{7915.09,6069.38,20.904},{7922.1,6102.98,20.8745}
		};
	};
	
	class schwarzberg : base_arena {
		name = "Schwarzberg (6-8 Spieler)";
		center[] = {14125.27,3059.356,0.00143886};
		radius = 130;
		loadout_whitelist[] = {"white"};

		spawns[] = {
			{14202.51, 3050.698, 0.014},{14187.868, 3020.599, 13.054},{14176.12, 3102.157, 0.047},{14151.298, 3009.494, 0.071},{14123.481, 2993.295, 0.078},{14096.718, 3000.874, 5.074},{14122.755, 3011.964, 9.073},{14150.592, 3051.669, 25.251},{14084.428, 3015.513, 0.071},{14058.594, 3062.714, 0.00143886},{14120.948, 3045.732, 36.315},{14107.273, 3055.544, 6.338},{14070.59, 3034.989, 0.048},{14152.216, 3086.650, 25.194},{14147.178, 3061.167, 34.580},{14086.776, 3062.862, 0.062},{14147.912, 3022.146, 19.624},{14134.938, 3013.418, 0.280},{14162.297, 3002.623, 5.499},{14183.32, 3017.748, 8.501},{14171.776, 3011.039, 0.514},{14196.292, 3032.324, 0.042},{14188.802, 3080.731, 22.926},{14128.087, 3074.196, 25.893},{14131.088, 3080.849, 33.264},{14100.332, 3034.697, 0.071},{14177.138, 3039.457, 25.264},{14099.845, 2964.991, 10.600},{14175.47, 3055.875, 39.201},{14083.248, 3067.045, 14.004},{14166.158, 2946.851, 0.00143886},{14104.604, 3072.448, 0.071},{14164.472, 3084.156, 39.201},{14131.088, 3021.401, 1.609},{14110.463, 2934.966, 0.00143886},{14136.052, 3052.536, 36.315},{14202.023, 3000.478, 3.1},{14111.278, 3014.076, 18.073},{14140.106, 3065.336, 25.187},{14101.438, 3048.416, 0.071},{14097.246, 3069.322, 3.881}
		};
	};
	
	class prison : base_arena {
		name = "Bundesgefängis (6-8 Spieler)";
		center[] = {7705.389,2919.152,0.00143886};
		radius = 120;

		spawns[] = {
			{7817.769, 2887.384, 0.00143886},{7630.321, 2934.820, 14.762},{7622.964, 2943.107, 7.393},{7644.576, 2917.259, 7.957},{7662.676, 2912.305, 7.707},{7797.146, 2934.051, 0.00143886},{7743.468, 2882.788, 12.640},{7691.09, 2985.572, 5.572},{7662.6, 2985.610, 0.00143886},{7617.048, 2957.646, 8.363},{7742.363, 2843.935, 15.712},{7730.801, 2936.278, 0.00143886},{7709.976, 2894.843, 0.164},{7761,2958.669, 4.776},{7707.083, 2978.552, 23.983},{7718.77, 2965.367, 0.00143886},{7774.874, 2870.729, 0.00143886},{7795.219, 2875.196, 0.00143886},{7784.165, 2944.094, 2.642},{7774.78, 2912.468, 0.00143886},{7728.755, 2875.292, 0.00143886},{7768.971, 2890.365, 0.00143886},{7615.112, 2955.451, 22.468},{7704.36, 2872.677, 20.929},{7658.206, 2947.296, 0.00143886},{7615.447, 2956.177, 22.468},{7749.003, 2939.127, 0.00143886},{7818.248, 2911.259, 0.00143886},{7737.968, 2894.844, 0.00143886},{7704.558, 2935.783, 0.00143886},{7734.022, 2959.616, 4.495},{7785.566, 2933.931, 0.00143886},{7788.220, 2877.307, 10.286},{7693.986, 2963.518, 0.577},{7674.333, 2939.746, 0.00143886},{7676.609, 2903.775, 0.00143886},{7763.493, 2929.267, 0.00143886},{7696.826, 2891.516, 7.574},{7651.998, 2887.577, 6.913},{7817.769, 2887.384, 0.00143886},{7818.248, 2911.259, 0.00143886}
		};
	};
	
	class rebellen : base_arena {
		name = "Rebelleninsel (8-10 Spieler)";
		center[] = {8150.438,1456.434,0.00143886};
		radius = 120;

		spawns[] = {
			{8070.391, 1496.792, 28.268},{8106.14,1482.334,0.507},{8169.345,1507.584, 0.00143886},{8131.495,1522.875, 0.00143886},{8134.421,1480.148, 0.00143886},{8083.644,1515.089, 0.264},{8088.935,1518.216,0.188},{8060.404,1473.294, 0.00143886},{8041.851,1504.262, 0.00143886},{8068.564,1516.029, 0.00143886},{8106.21,1507.622, 0.00143886},{8191.163,1493.889,3.732},{8184.675,1481.546,0.346},{8180.279,1447.330,4.140},{8210.581,1448.381, 0.00143886},{8164.776,1375.584,13.134},{8160.417,1380.270,9.122},{8220.507,1484.669,6.863},{8083.433, 1456.416, 0.00143886},{8122.714,1467.962,0.320},{8139.936,1447.103, 0.00143886},{8168.237,1388.321, 0.00143886},{8090.120,1470.027, 0.00143886},{8060.461,1499.357,12.531},{8179.234,1474.248,2.670},{8150.725,1436.950, 0.00143886},{8148, 1465.679,0.511},{8155.936,1528.805,0.115},{8094.962,1542.848, 0.00143886},{8103.274,1451.490, 0.00143886},{8158.781,1544.873, 0.00143886}
		};
	};
	
	class hotel : base_arena {
		name = "Hotel (8-10 Spieler)";
		center[] = {6029.208,3005.429,0.00143886};
		radius = 120;

		spawns[] = {
			{6071.576, 3004.895,15.342},{6110.215, 2965.677, 0.00143886},{6149.478, 3030.394, 3.816},{6158.198, 2987.402, 0.594},{6136.023, 3014.514, 0.00143886},{6058.34, 3068.909,13.080},{6050.701, 3041.487,22.252},{5983.291, 3010.658, 3.767},{6149.290, 2960.888,4.272 },{5935.552, 2939.180, 3.776},{6050.313, 3015.867, 10.108},{6049.613, 3024.66, 10.127},{6046.038, 3054.029, 14.426},{6059.279, 3061.833, 13.979},{6097.372, 3055.925, 0.592},{6135.089, 2957.585, 3.774},{5948.143, 2966.851,0.719},{6068.870, 3002.188, 10.108},{6058.770, 3073.694, 3.528},{6049.472, 3061.498, 8.678},{6067.295, 3037.043,12.374},{6156.136, 2980.973, 0.283},{6025.247, 3058.254, 5.376},{6072.157, 3075.07, 0.00143886},{6165.737, 3047.663, 0.00143886},{6084.664, 3029.606, 0.00143886},{6083.833, 2979.456, 4.496},{5960.951, 2989.936, 4.419},{6025.414, 3106.086, 0.00143886},{6123.094, 3016.541, 0.719},{6076.611, 2995.335, 4.154},{6059.151, 3057.039, 9.983},{6177.392, 2959.201, 0.00143886},{6058.63, 3010.68, 14.554},{6096.172, 3017.744, 0.00143886},{6098.769, 3063.272, 0.00143886},{6128.188, 3029.566, 0.325},{6158.679, 3002.294, 0.282},{6028.734, 2984.977, 0.00143886},{5982.322, 3015.183, 0.508},{6126.488, 2975.24 , 0.00143886}
		};
	};
	
	class hideout : base_arena {
		name = "Waffenmeister (8-10 Spieler)";
		center[] = {5694.199,2687.197,0.00143886};
		radius = 220;

		spawns[] = {
			{5815.207, 2635.510, 0.00143886},{5800.146, 2628.676, 0.00143886},{5806.481, 2547.729, 0.00143886},{5797.806, 2552.162, 9.113},{5779.994, 2546.745, 11.802},{5762.301, 2550.144, 7.721},{5728.107, 2560.73, 8.327},{5724.048, 2581.140, 14.639},{5687.325, 2567.807, 6.520},{5672.227, 2612.697, 0.00143886},{5714.688, 2624.122, 0.00143886},{5694.493, 2653.569, 0.125},{5685.888, 2652.432, 0.00143886},{5684.316, 2666.006, 0.00143886},{5671.807, 2690.971, 0.00143886},{5744.861, 2615.710, 3.461},{5652.086, 2694.499, 0.100},{5634.079, 2714.119, 1.184},{5658.362, 2741.453, 9.436},{5660.614, 2725.594, 0.00143886},{5702.427, 2716.177, 0.490},{5718.037, 2711.365, 1.787},{5723.773, 2698.126, 2.088},{5726.956, 2676.045, 0.00143886},{5761.131, 2626.004, 0.00143886},{5726.949, 2607.914, 4.878},{5742.422, 2597.012, 1.101},{5751.5, 2562.678, 9.649},{5760.457, 2612.819, 12.678},{5759.631, 2585.676, 18.030},{5749.721, 2577.282, 12.553},{5778.074, 2582.102, 17.056},{5783.185, 2575.983, 16.946},{5791.408, 2572.238, 13.205},{5796.338, 2568.333, 11.546},{5768.735, 2547.478, 9.129},{5830.594, 2564.888, 3.311},{5669.963, 2652.751, 0.1},{5714.197, 2591.865, 12.038},{5734.33, 2592.716, 13.835},{5781.694, 2605.049, 11.014},{5807.454, 2572.928, 1.895}
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
	
	class waffenmeister : base_arena {
		name = "Kokain Plantage (10-12 Spieler)";
		center[] = {6513.062,2071.111,0.00143886};
		radius = 150;

		spawns[] = {
			{6460.584, 1991.937, 0.00143886},{6481.235, 1968.875, 0.002},{6498.356, 1957.963, 0.00143886},{6506.516, 1984.486,  9.772},{6534.081, 1991.064, 13.541},{6556.898, 1978.500, 0.00143886},{6607.814, 1996.704, 0.00143886},{6558.614, 2050.997, 3.509},{6591.566, 2044.111, 0.00143886},{6538.937, 2090.014, 3.758},{6505.549, 2017.971, 13.455},{6500.473, 2002.877, 13.535},{6530.364, 2004.189, 13.646},{6475.292, 2137.460, 7.523},{6456.595, 2118.256, 7.653},{6490.295, 2143.998, 0.00143886},{6523.817, 2102.032, 0.00143886},{6496.84, 2063.633, 3.129},{6468.853, 2083.151, 0.00143886},{6454.750, 2068.677, 0.00143886},{6447.663, 2096.893, 0.00143886},{6506.541, 2115.805, 0.00143886},{6545.147, 2109.238, 7.883},{6557.865, 2081.647, 0.00143886},{6467.791, 2056.733, 3.832},{6494.207, 2034.331, 3.118},{6524.783, 2034.108, 3.726},{6576.034, 2008.101, 0.00143886},{6548.179, 2002.618, 0.00143886},{6531.462, 1953.445, 0.00143886},{6501.798, 2154.115, 0.00143886},{6527.754, 2140.243, 0.00143886},{6563.807, 2072.542, 0.00143886},{6611.091, 2032.200, 0.00143886},{6467.172, 2103.956, 0.00143886},{6477.311, 2019.315, 4.064},{6487.374, 1985.879, 9.007},{6526.58, 2016.758, 9.729},{6501.958, 2124.548, 7.863},{6503.771, 2046.866, 0.00143886},{6502.017, 2075.522, 0.00143886},{6484.151, 2085.841, 4.836},{6475.009, 2140.857, 3.456},{6457.884, 2119.630, 3.623},{6468.555, 2063.177, 0.00143886},{6549.947, 2063.242, 0.00143886},{6543.382, 2119.706, 0.00143886}
		};
	};
	
	class blankenstein : base_arena {
		name = "Blankenstein (16-18 Spieler)";
		center[] = {10180.224,7188.295,0.00143886};
		radius = 240;

		spawns[] = {
			{10071.496, 7067.818, 30.165},{10072.740, 7067.532, 22.120},{10066.146, 7109.357, 0.00143886},{10108.292, 7048.807, 0.00143886},{10158.392, 7059.188, 0.00143886},{10159.484, 7108.348, 0.00143886},{10145.311, 7176.531, 0.00143886},{10097.38, 7118.001, 0.00143886},{10100.027, 7233.922, 0.00143886},{10115.104, 7188.811, 0.00143886},{10209.829, 7163.646, 0.00143886},{10047.986, 7206.22, 13.553},{10031.832, 7220.223, 13.575},{10187.926, 7272.942, 0.00143886},{10187.810, 7204.285, 0.00143886},{10165.025, 7208.484, 0.00143886},{10153.968, 7221.635, 0.00143886},{10151.230, 7230.693, 0.00143886},{10170.621, 7216.705, 0.00143886},{10177.345, 7231.612, 0.00143886},{10194.148, 7221.656, 0.00143886},{10166.666, 7251.051, 0.00143886},{10172.271, 7260.309, 0.00143886},{10174.972, 7264.549, 0.00143886},{10195.4, 7250.904, 0.00143886},{10198.797, 7239.796, 0.00143886},{10113.560, 7230.627, 0.181},{10164.52, 7277.053, 0.173},{10144.224, 7298.487, 0.00143886},{10131.003, 7095.955, 0.00143886},{10177.076, 7148.055, 0.00143886},{10177.076, 7148.055, 0.00143886},{10221.815, 7232.161, 0.181},{10197.975, 7360.027, 0.00143886},{10158.664, 7333.169, 0.00143886},{10132.32, 7309.515, 0.00143886},{10229.022, 7368.734, 0.00143886},{10200.882, 7337.317, 7.204},{10222.312, 7194.275, 0.183},{10240.879, 7265.873, 11.085},{10261.17, 7267.862, 0.00143886},{10273.684, 7273.476, 4.687},{10283.448, 7301.045, 0.00143886},{10287.212, 7324.125, 0.00143886},{10280.974, 7350.713, 0.00143886},{10261.84, 7341.402, 0.00143886},{10267.190, 7313.952, 0.00143886},{10250.993, 7329.046, 7.901},{10232.913, 7303.183, 16.854},{10219.177, 7301.2, 0.00143886},{10182.136, 7084.706, 0.00143886},{10207.667, 7106.261, 0.00143886},{10188.030, 7114.256, 11.285},{10141.366, 7077.199, 10.079},{10106.188, 7156.270, 0.00143886},{10125.005, 7139.934, 0.00143886},{10101.408, 7131.269, 0.00143886},{10204.627, 7302.289, 0.00143886},{10061.945, 7218.832, 0.00143886},{10061.945, 7218.832, 0.00143886},{10068.108, 7154.622, 0.00143886},{10166.773, 7168.809, 0.00143886},{10264.357, 7367.708, 0.00143886}
		};
	};
	
};