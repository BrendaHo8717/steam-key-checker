// main.cpp — entry point. Wires config and subsystems together.

#include "steamkeychecker/settings.h"
#include "steamkeychecker/checker.h"
#include "steamkeychecker/proxies.h"
#include "steamkeychecker/hits.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    steamkeychecker::Settings settings = steamkeychecker::Settings::load_default();
    steamkeychecker::Checker checker(settings.store_path);
    steamkeychecker::Proxies proxies(settings.store_path);
    steamkeychecker::Hits hits(settings.store_path);
    std::fprintf(stderr, "[steam-key-checker] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
