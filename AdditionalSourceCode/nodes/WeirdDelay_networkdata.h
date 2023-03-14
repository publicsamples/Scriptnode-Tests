namespace project
{

struct WeirdDelay_networkdata: public scriptnode::dll::InterpretedNetworkData
{
	String getId() const override
	{
		return "WeirdDelay";
	}
	bool isModNode() const override
	{
		return false;
	}
	String getNetworkData() const override
	{
		return "2118.nT6K8C1RJUdP.nbPTy.KfxthFvApfXPKbCOTCzVqLXKsCTleldHMDCCSSIoWvqJLZwts8s009FTQzOvu.nL.6Bf60Z.mo73ZooUwwyZpKcmxyEsKy2iy8a0t6gAuFMJuJnmtx8o5qM4y8huA8YOT2MrzWzfdF9bkVC7VyyYzt7WUWdaBziqfS1xZiApm+fe0vZq6WJO38EQTa9ShiUFVG6qpbuAQD3cUyxBK.8OlDn+gwy8b0keyXjMHSuqs.ziyXX2qLIdP3DwyV5a2ZyoI.nGj9MiL9ty4NACPeFuw.B5cQtHWiBzas0X77Fe1kJmAy0YIzt.8YpPBzGBeOROiQTUcofmw2NeZM7ezSznjk0cd9Zyyn.+igoxCFMGjX4RKE1bIoANipgBJzQARncirQjIIGTbXQs1j4z2OdvDCrB0pGNXyUG3LH88tBqEwKAiYPqkYYh0l5AKuTqAnHEL4DYuwhLpDjPWAqsqoAatzNQxj5ZnfGEmsI.gyXb1iJMXYvyXM0zs5p09b+RQax2429z0daQyAFV3sfFCP+mL1pBLdtSGORjcotvzYt8alOYpqpMluQIDN2qN3ztrPTl6P1JB+a9dNa7EgyEvThBcRx5aZqQVn0AsOo+qRGjJI8hjjNaFGqrGJj4SHqzJbJiNqEBqLoIYhHJcmNhf0Z1XEmrREIUJJAky5rRmRKAhRymkJTfdc8ixCBmtdjo+4WK9GB.IA.1yXYHzt3fOG0FkbOmzOeUGcVsznHrzVmzKViTpiBgvXjrQ.nejbHStFl.A+PRLFoPKsBibOapMFLkFjGntb1.qh1k1ShrRqQFeytTY7LDNWOv47DMKcO6N7nCsZ+vRO4.vM+FUjwgOylK3fAVnICFL3XZyDVzpH40nwi2U6NTs5y8xWYc4r5l8lEZEFsxKSrUMDoRV2CNeyobJoyO5pV6kvmjiJiRQoiN.Ff3otVenmlZO.as2+O+R4w5x+nYoBJLW5XdtTWbZsv2rVcVYENkpvIRYMVqSKL5rynrJ.ashsxXP.kj4PYQzYNYdDODNaJO5.J8Q24.czoIfLMGtptPHAOffHrJg03jRMPkhDcZeRUqzVgQ0GLqO4zIQeU5iFCHXCnJ+.MERMCLhD..PPBHVFF.PTTVfhVnlGhBGDIDCHDD.LCCGC.P..G...D.Q...L.iC.ETSy.5wu0fCy2JykA+NIOBRDQpFFwtBsNo3jfsb54IzDaHk5kiMr9QjHHW5ljiJGOFzkBbAns8.Qy10y2kjSbzBKVzVRuXjHCIf.ce.xPatKhiIOUEST7PbMd4PlUoIrgf1v9iA76LCWfX9QVTcxd6fkaTYa3MypXStxAnj7ssKm.rkrcNEwf9DjuGq7LECeKnTevx4nXHhJ5A8FyGegIyKOhTIxt.QfS3mLnzW6KKE9skZLJsBtVg1SH1pp1jN.UwcQxrcIgpjmVpv6Yp2v5lhbW4v6NjXWjBnaQKnW7fMwBHdysVWn56I8N+QxwwkwWXArKV9Ox.ibKMkLlUp2nSZm7Pb4y4qbxv892c+uOX4AjqOTJNlVv1Kx3Q32lXiyd1NK.o7A3a7GAaY0BEnCdVf.yUd1s3Q8VNqc4809UXCXa6AvOA77s6xYvvmjPYM49sqzNc.3gjy0IRw8DtERPOidiYYmYpzqS0W0Fd678Q1GXncif0LqgBQfjRdmXO2WeO82h2VFb355V8JTdVMfr9XqDHkRzm9IgPhfzH9MzFZUafw0cc1Yfa1E93v9Fne2PKFRA8UNErtcympnEO0RaEzyTgxmafeUqsy2wl+8QvYZddDvzjPlC4gcjzXMDrpjUlz846L6Z3FxLDICw11.viA0CfQL1AcDjeddMXr6Ev+wxYA262pntCM7AMO7BnCzu45aRup.XJJJdhZpWnc+BtznvKGknckL5VuN2GOEmjNlLw+Ioo21cnSZZYLmXo2nUSdJNA0PFCxZ4oi.0u5TMxbd8tOdtHmqDohqt8AfzwjmlF8w0x1gokh7.zT9PaYhvbDTfrH3WDdovlQzJjnZ0pJSQ09Xl5kDUxXFFQJXkFKAGax+e13LwBE.of0.nekylJGG8Fg7J5I.gAfWabO02..KQmHfRU5ZfUP0LuSdSsZBSx7GN5b6QGgDswSs6NzLXYcKLaPWqsjiVrhRlbFIKFKXZV214PfwqoR4U4GrLwFeqBlcU1wJwDLG2zm3m3SRbru.XX1tDYM0JSDWCq002XnDAbBn8e2EO.q866BIBOCdTbAOVJ+LP2t5yq8ahxlR8XcXve5Lf8PGni02pnMni8CHiiCasHubbeX48RgCjol4LADnzH0Ttx9iwvic4riLaSDqvv2rSmCf7UCTuu4ngwYWcwKKF9T3KCdm+ZfouG4Gehgtd29D+6eSLxpSPu4jJ.LLwGCY56IGqeVPmPLZd8qyYh3j.sHykOe4lU+yC3bKVsr3fkB89mKxB3tSOl7aMYkUClaNKj+s3LI3IWDaWbEbwBbzsnf458EKU0DYvbAahMydNes2LBFGtfOW9jsi3HVWO1rFWhPnxOX2Migy8RqiR6oMqiYeKM2YLkKy8ZvQ1DjAwBKBkfX2P73hRgdmyat8jHFkCQloOW1izm+uV1nBbhhZIGNZt2e1PvD3jPv03DiYyZfUWMRIdxUmKKIxzXbK58UfzrR1EHfwkaDwRCFa7FyMhTA1vUbF5kPXyNaOkA31otXAL3Wz+QYmAC5IDan+hEVIcGkxU0UWGNQ9RoCyP3vQpQMYP8KHM7DgDC7S40Q.aFRuKGFeGR+7DAGPfJLphxVn9nnU1Yab7xMHvBNgJ3AZD2deCzmCcsH6A";
	}
};
}

