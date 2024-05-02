namespace project
{

struct node1_networkdata: public scriptnode::dll::InterpretedNetworkData
{
	String getId() const override
	{
		return "node1";
	}
	bool isModNode() const override
	{
		return false;
	}
	String getNetworkData() const override
	{
		return "320.nT6K8CVWATaB.Xaj3LBLKhS.aSE6Cin9rPPDq.dw1PjTEFBWSMACnfBrbhbwjZ0oe3B.t.vK..63zdfRdl0Nx7NpR9o1qolb4ZIFZmawaXZXZdcqBxOtCy5mhHOTjRdEfMCQ1QPzpgJAmcP1oDbKj1EQEXI+qXV63P9FUIOiqp1IWF7WaolXf7qswWOoCjmJtRWArtwuyB5Rd1xsO9qawI98ZFPQGxeksHjmzPIk7ONOJJ3IwSBEZ.4gVsqYbGlHuVviqjNZsHYrkgJtRT.fhNTjSCai2vzn5q0XIuh.xQVxBWoyXqp4YQQNBbQXcVAHf.BQ.QpZ6XlHANWafTzaeKBJSIvOcng4xriUwtg.XyhblLDqU3qkrCOL3lFhgbXPVHnq3dy81Vg7Nts64Jp4ivANjve0mH3PYhgt4XjE2I.";
	}
};
}

