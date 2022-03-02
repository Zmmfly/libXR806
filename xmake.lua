target("XR806")
    set_kind("static")
    add_includedirs(".", {public=true})
    add_includedirs("include", {public=true})
    add_files("src/*.c")

includes("test")