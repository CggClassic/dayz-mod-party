modded class MissionBase {
    static const string SCHANA_PARTY_VERSION = "1.3.0";

    override void OnInit () {
        super.OnInit ();
        SchanaPartyBasicMapAPI.Get ();
    }

    override UIScriptedMenu CreateScriptedMenu (int id) {
        UIScriptedMenu menu = NULL;
        menu = super.CreateScriptedMenu (id);
        if (!menu) {
            switch (id) {
                case SCHANA_PARTY_MENU:
                    menu = new SchanaPartyMenu;
                    break;
            }
            if (menu) {
                menu.SetID (id);
            }
        }
        return menu;
    }
}