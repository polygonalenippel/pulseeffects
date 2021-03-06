#ifndef DELAY_UI_HPP
#define DELAY_UI_HPP

#include "plugin_ui_base.hpp"

class DelayUi : public Gtk::Grid, public PluginUiBase {
 public:
  DelayUi(BaseObjectType* cobject,
          const Glib::RefPtr<Gtk::Builder>& builder,
          const std::string& schema,
          const std::string& schema_path);
  DelayUi(const DelayUi&) = delete;
  auto operator=(const DelayUi&) -> DelayUi& = delete;
  DelayUi(const DelayUi&&) = delete;
  auto operator=(const DelayUi &&) -> DelayUi& = delete;
  ~DelayUi() override;

  void reset() override;

 private:
  Glib::RefPtr<Gtk::Adjustment> input_gain, output_gain, time_l, time_r;
};

#endif
