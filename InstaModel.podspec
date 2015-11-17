Pod::Spec.new do |s|
  s.name             = "InstaModel"
  s.version          = "0.1.3"
  s.summary          = "Protocols describing Instagram data model."
  s.description      = <<-DESC
                        This pod contains ONLY protocols describing Instagram data model.
                       DESC

  s.homepage         = "https://github.com/rinat-enikeev/InstaModel"
  s.license          = 'MIT'
  s.author           = { "Rinat Enikeev" => "rinat.enikeev@gmail.com" }
  s.source           = { :git => "https://github.com/rinat-enikeev/InstaModel.git", :tag => s.version.to_s }

  s.platform     = :ios, '7.0'
  s.requires_arc = true

  s.source_files = 'Pod/Classes/**/*'

  s.public_header_files = 'Pod/Classes/**/*.h'
  s.frameworks = 'UIKit'

  s.module_name = 'InstaModel'

end
